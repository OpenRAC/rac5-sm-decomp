extern char D_001F4BC8[];
extern char *func_08EE30(char *);

unsigned int TEXMGR_GetWidth__FUi(int index) {
    return ((unsigned short *)func_08EE30(D_001F4BC8 + index * 100))[4];
}
