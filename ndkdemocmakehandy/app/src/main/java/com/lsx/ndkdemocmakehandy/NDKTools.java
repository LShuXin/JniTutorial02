package com.lsx.ndkdemocmakehandy;

public class NDKTools {
    static {
        System.loadLibrary("ndkdemocmakehandy");
    }
    public static native String getStringFromNDK();
}
