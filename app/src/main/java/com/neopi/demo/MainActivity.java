package com.neopi.demo;

import android.app.Activity;
import android.os.Bundle;
import android.widget.TextView;
import com.neopi.demo.jni.JniUtils;

public class MainActivity extends Activity {

  @Override protected void onCreate(Bundle savedInstanceState) {
    super.onCreate(savedInstanceState);
    setContentView(R.layout.activity_main);

    TextView textView = (TextView) this.findViewById(R.id.tv_hello);
    textView.setText("计算结果:"+new JniUtils().secondTest(4,3));
  }
}
