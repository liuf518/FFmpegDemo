package com.example.ffmpeg4android;

import android.app.Activity;
import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends Activity {

	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.activity_main);

		TextView tv = (TextView) this.findViewById(R.id.textview_hello);

		FFmpegNative ffmpeg = new FFmpegNative();
		int codecID = 28; // 28 is the H264 Codec ID

		int res = ffmpeg.avcodec_find_decoder(codecID);

		if (res == 0) {
			tv.setText("Success!");
		} else {
			tv.setText("Failed!");
		}
	}
}
