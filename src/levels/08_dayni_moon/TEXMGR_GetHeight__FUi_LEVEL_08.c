extern char D_002EE288[];
extern char *func_0AB0B0(char *);

unsigned int TEXMGR_GetHeight__FUi(int index) {
    return ((unsigned short *)func_0AB0B0(D_002EE288 + index * 100))[5];
}
