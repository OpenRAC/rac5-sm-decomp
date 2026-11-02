int MCPFONT_GetFontPage__FUc(unsigned char c) {
    if ((unsigned char)(c + 0x6E) < 2) {
        return c - 0x92;
    }
    return 0;
}
