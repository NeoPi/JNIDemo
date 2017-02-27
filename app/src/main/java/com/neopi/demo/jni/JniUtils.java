package com.neopi.demo.jni;

import java.net.URL;
import java.util.Map;

/**
 * Created by neopi on 17-2-22.
 */

public class JniUtils {

  static {
    System.loadLibrary("sayhello");
  }

  public native int secondTest(int a,int b);

  public native String sayHello();

  public native String encriptyMap(URL url,Map parmas,String securityKey);

  public native Object encriptyMaps(URL url,Map parmas,Map callBackMap ,String securityKey);

}
