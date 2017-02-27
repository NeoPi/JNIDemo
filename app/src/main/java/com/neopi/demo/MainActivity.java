package com.neopi.demo;

import android.app.Activity;
import android.os.Bundle;
import android.util.Log;
import android.widget.TextView;
import com.neopi.demo.jni.JniUtils;
import java.net.MalformedURLException;
import java.net.URL;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.Map;

public class MainActivity extends Activity {

  @Override protected void onCreate(Bundle savedInstanceState) {
    super.onCreate(savedInstanceState);
    setContentView(R.layout.activity_main);

    TextView mText = (TextView) this.findViewById(R.id.tv_hello);

    JniUtils jniUtils = new JniUtils();
    try {
      HashMap<String, String> hashMap = new HashMap<>();
      hashMap.put("1","apple");
      hashMap.put("2","pear");
      mText.setText("计算结果:"+jniUtils.secondTest(4,3)+"\n"+
          jniUtils.encriptyMap(new URL("http://api.xiaomi.cn/bbsapp/pai/comment/v/4"),
              hashMap,"随便填"));

      Map<String,String> newMap = new LinkedHashMap<>();
      Object result = jniUtils.encriptyMaps(new URL("http://api.xiaomi.cn/bbsapp/pai/comment/v/4"),
          hashMap,
          newMap,"随便填");

      Log.e("1111",result.toString());
    } catch (MalformedURLException e) {
      e.printStackTrace();
    }
  }
}
