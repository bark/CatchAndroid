package com.catch22.chainsaw;

import android.os.Bundle;
import android.app.Activity;
import android.view.Menu;

public class GameActivity extends Activity {

    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_game_view);
        GameActivity.createGLRenderer();
    }

    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        getMenuInflater().inflate(R.menu.activity_game_view, menu);
        return true;
    }
    
    public static native void createGLRenderer();
    
    static {
    	System.loadLibrary("catchLib");
    }
}
