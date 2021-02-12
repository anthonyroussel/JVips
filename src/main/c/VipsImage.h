/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_criteo_vips_VipsImage */

#ifndef _Included_com_criteo_vips_VipsImage
#define _Included_com_criteo_vips_VipsImage
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_criteo_vips_VipsImage
 * Method:    initFieldIDs
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_criteo_vips_VipsImage_initFieldIDs
  (JNIEnv *, jclass);

/*
 * Class:     com_criteo_vips_VipsImage
 * Method:    newFromByteBuffer
 * Signature: (Ljava/nio/ByteBuffer;I)V
 */
JNIEXPORT void JNICALL Java_com_criteo_vips_VipsImage_newFromByteBuffer
  (JNIEnv *, jobject, jobject, jint);

/*
 * Class:     com_criteo_vips_VipsImage
 * Method:    newFromBuffer
 * Signature: ([BI)V
 */
JNIEXPORT void JNICALL Java_com_criteo_vips_VipsImage_newFromBuffer
  (JNIEnv *, jobject, jbyteArray, jint);

/*
 * Class:     com_criteo_vips_VipsImage
 * Method:    newFromFile
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_criteo_vips_VipsImage_newFromFile
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_criteo_vips_VipsImage
 * Method:    blackNative
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_criteo_vips_VipsImage_blackNative
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_criteo_vips_VipsImage
 * Method:    newFromImageNative
 * Signature: (Lcom/criteo/vips/Image;[D)V
 */
JNIEXPORT void JNICALL Java_com_criteo_vips_VipsImage_newFromImageNative
  (JNIEnv *, jobject, jobject, jdoubleArray);

/*
 * Class:     com_criteo_vips_VipsImage
 * Method:    imageGetFormatNative
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_criteo_vips_VipsImage_imageGetFormatNative
  (JNIEnv *, jobject);

/*
 * Class:     com_criteo_vips_VipsImage
 * Method:    castUcharNative
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_criteo_vips_VipsImage_castUcharNative
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_criteo_vips_VipsImage
 * Method:    castNative
 * Signature: (IZ)V
 */
JNIEXPORT void JNICALL Java_com_criteo_vips_VipsImage_castNative
  (JNIEnv *, jobject, jint, jboolean);

/*
 * Class:     com_criteo_vips_VipsImage
 * Method:    imageGetInterpretationNative
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_criteo_vips_VipsImage_imageGetInterpretationNative
  (JNIEnv *, jobject);

/*
 * Class:     com_criteo_vips_VipsImage
 * Method:    colourspaceNative
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_criteo_vips_VipsImage_colourspaceNative__I
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_criteo_vips_VipsImage
 * Method:    colourspaceNative
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_criteo_vips_VipsImage_colourspaceNative__II
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_criteo_vips_VipsImage
 * Method:    histFindNdimNative
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_criteo_vips_VipsImage_histFindNdimNative
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_criteo_vips_VipsImage
 * Method:    resizeNative
 * Signature: (IIZ)V
 */
JNIEXPORT void JNICALL Java_com_criteo_vips_VipsImage_resizeNative
  (JNIEnv *, jobject, jint, jint, jboolean);

/*
 * Class:     com_criteo_vips_VipsImage
 * Method:    max1Native
 * Signature: (Lcom/criteo/vips/Max1Result;)V
 */
JNIEXPORT void JNICALL Java_com_criteo_vips_VipsImage_max1Native
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_criteo_vips_VipsImage
 * Method:    padNative
 * Signature: (II[DI)V
 */
JNIEXPORT void JNICALL Java_com_criteo_vips_VipsImage_padNative
  (JNIEnv *, jobject, jint, jint, jdoubleArray, jint);

/*
 * Class:     com_criteo_vips_VipsImage
 * Method:    cropNative
 * Signature: (IIII)V
 */
JNIEXPORT void JNICALL Java_com_criteo_vips_VipsImage_cropNative
  (JNIEnv *, jobject, jint, jint, jint, jint);

/*
 * Class:     com_criteo_vips_VipsImage
 * Method:    findTrimNative
 * Signature: (D[D)[I
 */
JNIEXPORT jintArray JNICALL Java_com_criteo_vips_VipsImage_findTrimNative
  (JNIEnv *, jobject, jdouble, jdoubleArray);

/*
 * Class:     com_criteo_vips_VipsImage
 * Method:    compose
 * Signature: (Lcom/criteo/vips/Image;)V
 */
JNIEXPORT void JNICALL Java_com_criteo_vips_VipsImage_compose
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_criteo_vips_VipsImage
 * Method:    flattenNative
 * Signature: ([D)V
 */
JNIEXPORT void JNICALL Java_com_criteo_vips_VipsImage_flattenNative
  (JNIEnv *, jobject, jdoubleArray);

/*
 * Class:     com_criteo_vips_VipsImage
 * Method:    writeToArrayNative
 * Signature: (Ljava/lang/String;IZ)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_criteo_vips_VipsImage_writeToArrayNative
  (JNIEnv *, jobject, jstring, jint, jboolean);

/*
 * Class:     com_criteo_vips_VipsImage
 * Method:    writePNGToArrayNative
 * Signature: (IZIZ)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_criteo_vips_VipsImage_writePNGToArrayNative
  (JNIEnv *, jobject, jint, jboolean, jint, jboolean);

/*
 * Class:     com_criteo_vips_VipsImage
 * Method:    writeJPEGToArrayNative
 * Signature: (IZ)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_criteo_vips_VipsImage_writeJPEGToArrayNative
  (JNIEnv *, jobject, jint, jboolean);

/*
 * Class:     com_criteo_vips_VipsImage
 * Method:    writeAVIFToArrayNative
 * Signature: (IZI)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_criteo_vips_VipsImage_writeAVIFToArrayNative
  (JNIEnv *, jobject, jint, jboolean, jint);

/*
 * Class:     com_criteo_vips_VipsImage
 * Method:    writeToFile
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_criteo_vips_VipsImage_writeToFile
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_criteo_vips_VipsImage
 * Method:    getWidth
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_criteo_vips_VipsImage_getWidth
  (JNIEnv *, jobject);

/*
 * Class:     com_criteo_vips_VipsImage
 * Method:    getHeight
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_criteo_vips_VipsImage_getHeight
  (JNIEnv *, jobject);

/*
 * Class:     com_criteo_vips_VipsImage
 * Method:    getBands
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_criteo_vips_VipsImage_getBands
  (JNIEnv *, jobject);

/*
 * Class:     com_criteo_vips_VipsImage
 * Method:    getPoint
 * Signature: (II)[D
 */
JNIEXPORT jdoubleArray JNICALL Java_com_criteo_vips_VipsImage_getPoint
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_criteo_vips_VipsImage
 * Method:    getPointPixelPacketNative
 * Signature: (II)[D
 */
JNIEXPORT jdoubleArray JNICALL Java_com_criteo_vips_VipsImage_getPointPixelPacketNative
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_criteo_vips_VipsImage
 * Method:    hasAlpha
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_criteo_vips_VipsImage_hasAlpha
  (JNIEnv *, jobject);

/*
 * Class:     com_criteo_vips_VipsImage
 * Method:    linearNative
 * Signature: ([D[DZ)V
 */
JNIEXPORT void JNICALL Java_com_criteo_vips_VipsImage_linearNative
  (JNIEnv *, jobject, jdoubleArray, jdoubleArray, jboolean);

/*
 * Class:     com_criteo_vips_VipsImage
 * Method:    convertTosRGB
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_criteo_vips_VipsImage_convertTosRGB
  (JNIEnv *, jobject);

/*
 * Class:     com_criteo_vips_VipsImage
 * Method:    getNbFrame
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_criteo_vips_VipsImage_getNbFrame
  (JNIEnv *, jobject);

/*
 * Class:     com_criteo_vips_VipsImage
 * Method:    autorot
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_criteo_vips_VipsImage_autorot
  (JNIEnv *, jobject);

/*
 * Class:     com_criteo_vips_VipsImage
 * Method:    removeAutorotAngle
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_criteo_vips_VipsImage_removeAutorotAngle
  (JNIEnv *, jobject);

/*
 * Class:     com_criteo_vips_VipsImage
 * Method:    clone
 * Signature: ()Lcom/criteo/vips/VipsImage;
 */
JNIEXPORT jobject JNICALL Java_com_criteo_vips_VipsImage_clone
  (JNIEnv *, jobject);

/*
 * Class:     com_criteo_vips_VipsImage
 * Method:    release
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_criteo_vips_VipsImage_release
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
