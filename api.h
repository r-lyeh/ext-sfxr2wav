#if CODE

AUTORUN {
    recipe(
        // paths and extensions. expected errorlevel
        "**.sfxr", 0,
        // conversion steps
        "ext/ext-audio-sfxr2wav/sfxr2wav.EXE INPUT OUTPUT\n"
    );
}

#endif
