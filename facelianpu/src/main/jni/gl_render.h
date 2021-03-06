#ifndef __GL_RENDER_H__
#define __GL_RENDER_H__

#include "jni.h"

#ifdef __cplusplus
extern "C" {
#endif
JNIEXPORT void JNICALL Java_sensetime_senseme_com_effects_display_STGLRender_nativeInitWH(JNIEnv* env, jobject obj, jint w, int h);
JNIEXPORT void JNICALL Java_sensetime_senseme_com_effects_display_STGLRender_nativeInitMousePrograme(JNIEnv* env, jobject obj);
JNIEXPORT void JNICALL Java_sensetime_senseme_com_effects_display_STGLRender_nativeDrawZuichun(JNIEnv* env, jobject obj, jobjectArray stPoint, jfloatArray downmousecolors);
JNIEXPORT void JNICALL Java_sensetime_senseme_com_effects_display_STGLRender_nativeDrawUPMouse(JNIEnv* env, jobject obj, jobjectArray stPoint, jfloatArray downmousecolors);
JNIEXPORT void JNICALL Java_sensetime_senseme_com_effects_display_STGLRender_nativeDrawRightJiemao(JNIEnv* env, jobject obj, jobjectArray stPoint, int textureId , jfloatArray bgcolors);
JNIEXPORT void JNICALL Java_sensetime_senseme_com_effects_display_STGLRender_nativeDrawLeftMeiMao(JNIEnv* env, jobject obj, jobjectArray stPoint, int textureId , jfloatArray bgcolors);
JNIEXPORT void JNICALL Java_sensetime_senseme_com_effects_display_STGLRender_nativeDrawRightMeiMao(JNIEnv* env, jobject obj, jobjectArray stPoint, int textureId , jfloatArray bgcolors);
JNIEXPORT void JNICALL Java_sensetime_senseme_com_effects_display_STGLRender_nativeDrawSaiHong(JNIEnv* env, jobject obj, jobjectArray stPoint, int textureId , jfloatArray bgcolors);
JNIEXPORT void JNICALL Java_sensetime_senseme_com_effects_display_STGLRender_nativeChangeFaceAndJaw(JNIEnv* env, jobject obj, jobjectArray stPoint, int texture,  float scale, float jawscale);
JNIEXPORT void JNICALL Java_sensetime_senseme_com_effects_display_STGLRender_nativeDrawLianpu(JNIEnv* env, jobject obj, jfloatArray  stPoint, int texture, int lianpuid, float scale, float jawscale);
JNIEXPORT void JNICALL Java_sensetime_senseme_com_effects_display_STGLRender_nativeDrawFenDi(JNIEnv* env, jobject obj, jobjectArray stPoint, int textureId , jfloatArray bgcolors);;
JNIEXPORT void JNICALL Java_sensetime_senseme_com_effects_display_ImageInputRender_nativeChangeFaceAndJaw(JNIEnv* env, jobject obj, jobjectArray stPoint, int texture,  float scale, float jawscale);

#ifdef __cplusplus
}
#endif

#endif

