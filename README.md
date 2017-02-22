JNIDemo
===========================================================

##这只是一个简单的在AndroidStudio中书写及调用JNI的小demo

### 关于JDK ，AndroidSDK，NDK的配置此处略

* 1.创建JniUtils.java 类，生成并生成.h头文件
  此类里代码很简单：
  <pre><code>
  public class JniUtils {
    static {
      System.loadLibrary("sayhello");
    }
    public native int secondTest(int a,int b);
    public native String sayHello();
  }</code></pre>
  
  然后Build->Make Project,此时会在app/build/intermediates/classes/debug/com/neopi/demo/jni/JniUtils.class看到对应的class文件，
  然后在终端，工作目录切换到java的统计目录，使用命令
  javah -d jni -classpath /home/neopi/Documents/Demo_Workspace/Demo/app/build/intermediates/classes/debug com.neopi.demo.jni.JniUtils
  注意debug 后面的空格，次命令执行结束后会在java的同级目录下生成一个jni文件夹，并生成名为com_neopi_demo_jni_JniUtils.h的头文件,*
  
  
 * 2.编写c文件
  可以直接从刚才生成的头文件中复制对应的方法，实现即可，具体看代码 *
  
 * 3.Android项目调用
  参考MainActivity.java代码
  
  
  ## 关于生成头文件的命令可以使用IDE的 External Tools工具配置如图：
  ![External Tools](/path/to/img.jpg "External Tools 配置图")
  
