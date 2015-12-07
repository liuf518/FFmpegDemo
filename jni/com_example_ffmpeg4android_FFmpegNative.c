#include "com_example_ffmpeg4android_FFmpegNative.h"
#include <stdlib.h>
#include <stdio.h>
#include <libavutil/opt.h>
#include <libavcodec/avcodec.h>
#include <libavutil/channel_layout.h>
#include <libavutil/common.h>
#include <libavutil/imgutils.h>
#include <libavutil/mathematics.h>
#include <libavutil/samplefmt.h>

#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_example_ffmpeg4android_FFmpegNative
 * Method:    avcodec_find_decoder
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_example_ffmpeg4android_FFmpegNative_avcodec_1find_1decoder
  (JNIEnv *env, jobject arg, jint codecID)
{
	AVCodec*codec = NULL;

	/*register all formats and codecs */
	av_register_all();

	codec= avcodec_find_decoder(codecID);

	if(codec != NULL)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

#ifdef __cplusplus
}
#endif
