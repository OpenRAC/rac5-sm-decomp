extern char D_001B7048[];
extern char *func_081118(char *);

unsigned int TEXMGR_GetHeight__FUi(int index) {
    return ((unsigned short *)func_081118(D_001B7048 + index * 100))[5];
}
