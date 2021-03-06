/*
 * Copyright (c) 2014. Massachusetts Institute of Technology
 * Released under the BSD 2-Clause License
 * http://opensource.org/licenses/BSD-2-Clause
 * This file might include comments and code snippets from FFMPEG, released under LGPL 2.1 or later.
 */


#include "JavMem.h"
#include "libavutil/mem.h"

JNIEXPORT jlong JNICALL Java_bits_jav_util_JavMem_malloc
( JNIEnv *env, jclass clazz, jlong size )
{
    void *ret = av_malloc( (size_t)size );
    return *(jlong*)&ret;
}


JNIEXPORT jlong JNICALL Java_bits_jav_util_JavMem_mallocz
( JNIEnv *env, jclass clazz, jlong size )
{
    void *ret = av_mallocz( (size_t)size );
    return *(jlong*)&ret;
}


JNIEXPORT jlong JNICALL Java_bits_jav_util_JavMem_realloc
( JNIEnv *env, jclass clazz, jlong ptr, jlong size )
{
    void *p   = *(void**)&ptr;
    void *ret = av_realloc( p, (size_t)size );
    return *(jlong*)&ret;
}


JNIEXPORT jlong JNICALL Java_bits_jav_util_JavMem_reallocf
( JNIEnv *env, jclass clazz, jlong ptr, jlong elCount, jlong elSize )
{
    void *p   = *(void**)&ptr;
    void *ret = av_realloc_f( p, (size_t)elCount, (size_t)elSize );
    return *(jlong*)&ret;
}


JNIEXPORT jlong JNICALL Java_bits_jav_util_JavMem_reallocArray
( JNIEnv *env, jclass clazz, jlong ptr, jlong elCount, jlong elSize )
{
    void *p   = *(void**)&ptr;
    void *ret = av_realloc_array( p, (size_t)elCount, (size_t)elSize );
    return *(jlong*)&ret;
}


JNIEXPORT jlong JNICALL Java_bits_jav_util_JavMem_strdup
( JNIEnv *env, jclass clazz, jlong ptr )
{
    char *ret = av_strdup( *(const char**)&ptr );
    return *(jlong*)&ret;
}


JNIEXPORT jlong JNICALL Java_bits_jav_util_JavMem_memdup
( JNIEnv *env, jclass clazz, jlong ptr, jlong size )
{
    void *p   = *(void**)&ptr;
    void *ret = av_memdup( p, (size_t)size );
    return *(jlong*)&ret;
}


JNIEXPORT void JNICALL Java_bits_jav_util_JavMem_free
( JNIEnv *env, jclass clazz, jlong ptr )
{
    av_free( *(void**)&ptr );
}


JNIEXPORT void JNICALL Java_bits_jav_util_JavMem_copy
( JNIEnv *env, jclass clazz, jlong srcPtr, jlong dstPtr, jlong len )
{
	memcpy( *(char**)&dstPtr, *(const char**)&srcPtr, (size_t)len );
}


JNIEXPORT void JNICALL Java_bits_jav_util_JavMem_copyReverse
( JNIEnv *env, jclass clazz, jlong srcPtr, jlong dstPtr, jint chunkNum, jint chunkSize )
{
    switch( chunkSize ) {
    case 1: {
        const uint8_t* src = *(const uint8_t**)&srcPtr;
        uint8_t* dst = *(uint8_t**)&dstPtr + chunkNum;
        for( int i = 0; i < chunkNum; i++ ) {
            *--dst = *src++;
        }
        break;
    }
    case 2: {
        const uint16_t* src = *(const uint16_t**)&srcPtr;
        uint16_t* dst = *(uint16_t**)&dstPtr + chunkNum;
        for( int i = 0; i < chunkNum; i++ ) {
            *--dst = *src++;
        }
        break;
    }
    case 4: {
        const uint32_t* src = *(const uint32_t**)&srcPtr;
        uint32_t* dst = *(uint32_t**)&dstPtr + chunkNum;
        for( int i = 0; i < chunkNum; i++ ) {
            *--dst = *src++;
        }
        break;
    }
    case 8: {
        const uint64_t* src = *(const uint64_t**)&srcPtr;
        uint64_t* dst = *(uint64_t**)&dstPtr + chunkNum;
        for( int i = 0; i < chunkNum; i++ ) {
            *--dst = *src++;
        }
        break;
    }
    default: {
        const void* src = *(const void**)&srcPtr;
        void* dst = *(void**)&dstPtr + chunkNum * chunkSize;
        for( int i = 0; i < chunkNum; i++ ) {
            dst -= chunkSize;
            memcpy( dst, src, chunkSize );
            src += chunkSize;
        }
        break;
    }}
}


JNIEXPORT void JNICALL Java_bits_jav_util_JavMem_memset
( JNIEnv *env, jclass clazz, jlong ptr, jint val, jint size )
{
    memset( *(void**)&ptr, val, size );
}



JNIEXPORT jlong JNICALL Java_bits_jav_util_JavMem_nativeAddress
( JNIEnv *env, jclass clazz, jobject buf )
{
	if( buf ) {
		return (jlong)( (*env)->GetDirectBufferAddress( env, buf ) );
	}
	return 0;
}


JNIEXPORT void JNICALL Java_bits_jav_util_JavMem_nCopyPointerToBuffer
( JNIEnv *env, jclass clazz, jlong srcPtr, jobject dstBuf, jint off, jlong len )
{
    char* dst = (*env)->GetDirectBufferAddress( env, dstBuf ) + off;
    memcpy( dst, *(const char**)&srcPtr, (size_t)len ); 
}


JNIEXPORT void JNICALL Java_bits_jav_util_JavMem_nCopyBufferToPointer
(JNIEnv *env, jclass clazz, jobject srcBuf, jint off, jlong len, jlong dstPtr )
{
	const char *src = (*env)->GetDirectBufferAddress( env, srcBuf ) + off;
	memcpy( *(char**)&dstPtr, src, (size_t)len );
}

