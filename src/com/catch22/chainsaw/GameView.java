package com.catch22.chainsaw;

import android.os.Bundle;
import android.app.Activity;
import android.util.Log;
import android.view.Menu;

public class GameView extends Activity {

    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_game_view);
        GameView.createGLRenderer();
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
