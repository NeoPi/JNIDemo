package com.neopi.demo.jni;

/**
 * Created by neopi on 17-2-22.
 */

public class JniUtils {

  static {
    System.loadLibrary("sayhello");
  }

  public native int secondTest(int a,int b);

  public native String sayHello();



}
