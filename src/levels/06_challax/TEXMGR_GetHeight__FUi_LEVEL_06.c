extern char D_0028BD88[];
extern char *func_09AF88(char *);

unsigned int TEXMGR_GetHeight__FUi(int index) {
    return ((unsigned short *)func_09AF88(D_0028BD88 + index * 100))[5];
}
