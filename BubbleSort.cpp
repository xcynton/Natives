#include <jni.h>

JNIEXPORT void JNICALL Java_BubbleSort_callnative(JNIEnv *env,  jobject object, jint[] *array, jint length){
    int i, j,tmp;
    for (i = 0; i < length ; i++) {
        for (j = i; j < length ; j++) {
            if (array[i] > array[j]) {
                tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }
    return array;
}
JNIEXPORT void JNICALL Java_BubbleSort_callnative(JNIEnv *env, jobject object, jlong[] *array, jlong length){
    long i, j,tmp;
    for (i = 0; i < length ; i++) {
        for (j = i; j < length ; j++) {
            if (array[i] > array[j]) {
                tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }
    return array;
}