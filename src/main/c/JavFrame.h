/* DO NOT EDIT THIS FILE - it is machine generated */
#include <JavaVM/jni.h>
/* Header for class bits_jav_codec_JavFrame */

#ifndef _Included_bits_jav_codec_JavFrame
#define _Included_bits_jav_codec_JavFrame
#ifdef __cplusplus
extern "C" {
#endif
#undef bits_jav_codec_JavFrame_AV_NUM_DATA_POINTERS
#define bits_jav_codec_JavFrame_AV_NUM_DATA_POINTERS 8L
/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nAllocFrame
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_bits_jav_codec_JavFrame_nAllocFrame
  (JNIEnv *, jclass);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nFree
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_bits_jav_codec_JavFrame_nFree
  (JNIEnv *, jclass, jlong);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nUnref
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_bits_jav_codec_JavFrame_nUnref
  (JNIEnv *, jclass, jlong);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nData
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_bits_jav_codec_JavFrame_nData
  (JNIEnv *, jclass, jlong);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nDataElem
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_bits_jav_codec_JavFrame_nDataElem__JI
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nDataElem
 * Signature: (JIJ)V
 */
JNIEXPORT void JNICALL Java_bits_jav_codec_JavFrame_nDataElem__JIJ
  (JNIEnv *, jclass, jlong, jint, jlong);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nDataElem
 * Signature: (J[J)V
 */
JNIEXPORT void JNICALL Java_bits_jav_codec_JavFrame_nDataElem__J_3J
  (JNIEnv *, jclass, jlong, jlongArray);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nLineSize
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_bits_jav_codec_JavFrame_nLineSize__J
  (JNIEnv *, jclass, jlong);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nLineSize
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_bits_jav_codec_JavFrame_nLineSize__JI
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nLineSize
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_bits_jav_codec_JavFrame_nLineSize__JII
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nLineSizes
 * Signature: (J[I)V
 */
JNIEXPORT void JNICALL Java_bits_jav_codec_JavFrame_nLineSizes
  (JNIEnv *, jclass, jlong, jintArray);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nExtendedData
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_bits_jav_codec_JavFrame_nExtendedData__J
  (JNIEnv *, jclass, jlong);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nExtendedData
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_bits_jav_codec_JavFrame_nExtendedData__JJ
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nExtendedDataElem
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_bits_jav_codec_JavFrame_nExtendedDataElem__JI
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nExtendedDataElem
 * Signature: (JIJ)V
 */
JNIEXPORT void JNICALL Java_bits_jav_codec_JavFrame_nExtendedDataElem__JIJ
  (JNIEnv *, jclass, jlong, jint, jlong);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nWidth
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_bits_jav_codec_JavFrame_nWidth__J
  (JNIEnv *, jclass, jlong);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nWidth
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_bits_jav_codec_JavFrame_nWidth__JI
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nHeight
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_bits_jav_codec_JavFrame_nHeight__J
  (JNIEnv *, jclass, jlong);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nHeight
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_bits_jav_codec_JavFrame_nHeight__JI
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nNbSamples
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_bits_jav_codec_JavFrame_nNbSamples__J
  (JNIEnv *, jclass, jlong);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nNbSamples
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_bits_jav_codec_JavFrame_nNbSamples__JI
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nFormat
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_bits_jav_codec_JavFrame_nFormat__J
  (JNIEnv *, jclass, jlong);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nFormat
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_bits_jav_codec_JavFrame_nFormat__JI
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nKeyFrame
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_bits_jav_codec_JavFrame_nKeyFrame__J
  (JNIEnv *, jclass, jlong);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nKeyFrame
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_bits_jav_codec_JavFrame_nKeyFrame__JI
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nPictType
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_bits_jav_codec_JavFrame_nPictType__J
  (JNIEnv *, jclass, jlong);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nPictType
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_bits_jav_codec_JavFrame_nPictType__JI
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nSampleAspectRatio
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_bits_jav_codec_JavFrame_nSampleAspectRatio__J
  (JNIEnv *, jclass, jlong);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nSampleAspectRatio
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_bits_jav_codec_JavFrame_nSampleAspectRatio__JII
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nPts
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_bits_jav_codec_JavFrame_nPts__J
  (JNIEnv *, jclass, jlong);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nPts
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_bits_jav_codec_JavFrame_nPts__JJ
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nPktPts
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_bits_jav_codec_JavFrame_nPktPts__J
  (JNIEnv *, jclass, jlong);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nPktPts
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_bits_jav_codec_JavFrame_nPktPts__JJ
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nPktDts
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_bits_jav_codec_JavFrame_nPktDts__J
  (JNIEnv *, jclass, jlong);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nPktDts
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_bits_jav_codec_JavFrame_nPktDts__JJ
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nCodedPictureNumber
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_bits_jav_codec_JavFrame_nCodedPictureNumber__J
  (JNIEnv *, jclass, jlong);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nCodedPictureNumber
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_bits_jav_codec_JavFrame_nCodedPictureNumber__JI
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nDisplayPictureNumber
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_bits_jav_codec_JavFrame_nDisplayPictureNumber__J
  (JNIEnv *, jclass, jlong);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nDisplayPictureNumber
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_bits_jav_codec_JavFrame_nDisplayPictureNumber__JI
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nQuality
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_bits_jav_codec_JavFrame_nQuality__J
  (JNIEnv *, jclass, jlong);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nQuality
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_bits_jav_codec_JavFrame_nQuality__JI
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nReference
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_bits_jav_codec_JavFrame_nReference__J
  (JNIEnv *, jclass, jlong);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nReference
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_bits_jav_codec_JavFrame_nReference__JI
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nMacroBlockTypePointer
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_bits_jav_codec_JavFrame_nMacroBlockTypePointer
  (JNIEnv *, jclass, jlong);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nMotionVectorPointer
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_bits_jav_codec_JavFrame_nMotionVectorPointer
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nError
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_bits_jav_codec_JavFrame_nError__JI
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nError
 * Signature: (JIJ)V
 */
JNIEXPORT void JNICALL Java_bits_jav_codec_JavFrame_nError__JIJ
  (JNIEnv *, jclass, jlong, jint, jlong);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nErrors
 * Signature: (J[J)V
 */
JNIEXPORT void JNICALL Java_bits_jav_codec_JavFrame_nErrors
  (JNIEnv *, jclass, jlong, jlongArray);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nType
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_bits_jav_codec_JavFrame_nType__J
  (JNIEnv *, jclass, jlong);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nType
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_bits_jav_codec_JavFrame_nType__JI
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nRepeatPict
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_bits_jav_codec_JavFrame_nRepeatPict__J
  (JNIEnv *, jclass, jlong);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nRepeatPict
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_bits_jav_codec_JavFrame_nRepeatPict__JI
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nInterlacedFrame
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_bits_jav_codec_JavFrame_nInterlacedFrame__J
  (JNIEnv *, jclass, jlong);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nInterlacedFrame
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_bits_jav_codec_JavFrame_nInterlacedFrame__JI
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nTopFieldFirst
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_bits_jav_codec_JavFrame_nTopFieldFirst__J
  (JNIEnv *, jclass, jlong);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nTopFieldFirst
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_bits_jav_codec_JavFrame_nTopFieldFirst__JI
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nPaletteHasChanged
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_bits_jav_codec_JavFrame_nPaletteHasChanged__J
  (JNIEnv *, jclass, jlong);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nPaletteHasChanged
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_bits_jav_codec_JavFrame_nPaletteHasChanged__JI
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nBufferHints
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_bits_jav_codec_JavFrame_nBufferHints__J
  (JNIEnv *, jclass, jlong);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nBufferHints
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_bits_jav_codec_JavFrame_nBufferHints__JI
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nMotionSubsampleLog2
 * Signature: (J)B
 */
JNIEXPORT jbyte JNICALL Java_bits_jav_codec_JavFrame_nMotionSubsampleLog2__J
  (JNIEnv *, jclass, jlong);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nMotionSubsampleLog2
 * Signature: (JB)V
 */
JNIEXPORT void JNICALL Java_bits_jav_codec_JavFrame_nMotionSubsampleLog2__JB
  (JNIEnv *, jclass, jlong, jbyte);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nSampleRate
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_bits_jav_codec_JavFrame_nSampleRate__J
  (JNIEnv *, jclass, jlong);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nSampleRate
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_bits_jav_codec_JavFrame_nSampleRate__JI
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nChannelLayout
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_bits_jav_codec_JavFrame_nChannelLayout__J
  (JNIEnv *, jclass, jlong);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nChannelLayout
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_bits_jav_codec_JavFrame_nChannelLayout__JJ
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nBuf
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_bits_jav_codec_JavFrame_nBuf
  (JNIEnv *, jclass, jlong);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nBufElem
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_bits_jav_codec_JavFrame_nBufElem__JI
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nBufElem
 * Signature: (JIJ)V
 */
JNIEXPORT void JNICALL Java_bits_jav_codec_JavFrame_nBufElem__JIJ
  (JNIEnv *, jclass, jlong, jint, jlong);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nJavaBufElem
 * Signature: (JI)Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_bits_jav_codec_JavFrame_nJavaBufElem
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nBufElemSize
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_bits_jav_codec_JavFrame_nBufElemSize
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nExtendedBuf
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_bits_jav_codec_JavFrame_nExtendedBuf__J
  (JNIEnv *, jclass, jlong);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nExtendedBuf
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_bits_jav_codec_JavFrame_nExtendedBuf__JJ
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nExtendedBufElem
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_bits_jav_codec_JavFrame_nExtendedBufElem__JI
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nExtendedBufElem
 * Signature: (JIJ)V
 */
JNIEXPORT void JNICALL Java_bits_jav_codec_JavFrame_nExtendedBufElem__JIJ
  (JNIEnv *, jclass, jlong, jint, jlong);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nJavaExtendedBufElem
 * Signature: (JI)Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_bits_jav_codec_JavFrame_nJavaExtendedBufElem
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nExtendedBufElemSize
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_bits_jav_codec_JavFrame_nExtendedBufElemSize
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nNbExtendedBuf
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_bits_jav_codec_JavFrame_nNbExtendedBuf__J
  (JNIEnv *, jclass, jlong);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nNbExtendedBuf
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_bits_jav_codec_JavFrame_nNbExtendedBuf__JI
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nNbAllBufs
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_bits_jav_codec_JavFrame_nNbAllBufs
  (JNIEnv *, jclass, jlong);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nAllBufsMinSize
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_bits_jav_codec_JavFrame_nAllBufsMinSize
  (JNIEnv *, jclass, jlong);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nIsWritable
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_bits_jav_codec_JavFrame_nIsWritable
  (JNIEnv *, jclass, jlong);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nMakeWritable
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_bits_jav_codec_JavFrame_nMakeWritable
  (JNIEnv *, jclass, jlong);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nCopy
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_bits_jav_codec_JavFrame_nCopy
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nCopyProps
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_bits_jav_codec_JavFrame_nCopyProps
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nBestEffortTimestamp
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_bits_jav_codec_JavFrame_nBestEffortTimestamp
  (JNIEnv *, jclass, jlong);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nPktPos
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_bits_jav_codec_JavFrame_nPktPos
  (JNIEnv *, jclass, jlong);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nPktDuration
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_bits_jav_codec_JavFrame_nPktDuration
  (JNIEnv *, jclass, jlong);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nMetadata
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_bits_jav_codec_JavFrame_nMetadata__J
  (JNIEnv *, jclass, jlong);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nMetadata
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_bits_jav_codec_JavFrame_nMetadata__JJ
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nDecodeErrorFlags
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_bits_jav_codec_JavFrame_nDecodeErrorFlags__J
  (JNIEnv *, jclass, jlong);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nDecodeErrorFlags
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_bits_jav_codec_JavFrame_nDecodeErrorFlags__JI
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nChannels
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_bits_jav_codec_JavFrame_nChannels__J
  (JNIEnv *, jclass, jlong);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nChannels
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_bits_jav_codec_JavFrame_nChannels__JI
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nFillVideoFrame
 * Signature: (JIIILjava/nio/ByteBuffer;II)I
 */
JNIEXPORT jint JNICALL Java_bits_jav_codec_JavFrame_nFillVideoFrame
  (JNIEnv *, jclass, jlong, jint, jint, jint, jobject, jint, jint);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nFillAudioFrame
 * Signature: (JIIIILjava/nio/ByteBuffer;II)I
 */
JNIEXPORT jint JNICALL Java_bits_jav_codec_JavFrame_nFillAudioFrame
  (JNIEnv *, jclass, jlong, jint, jint, jint, jint, jobject, jint, jint);

/*
 * Class:     bits_jav_codec_JavFrame
 * Method:    nComputeVideoBufferSize
 * Signature: (III)I
 */
JNIEXPORT jint JNICALL Java_bits_jav_codec_JavFrame_nComputeVideoBufferSize
  (JNIEnv *, jclass, jint, jint, jint);

#ifdef __cplusplus
}
#endif
#endif
