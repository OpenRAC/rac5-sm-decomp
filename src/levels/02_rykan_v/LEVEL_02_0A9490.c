extern char D_002C9108[];
extern char D_002B6508[];
extern int D_0020B860[];
extern int D_0020B460[];
extern char D_0020B470[];
extern int D_0020B854[];
extern int D_0020B858[];
extern int g_TEXMGR_LastTex;

void *memset(void *, int, unsigned int);
int func_0AA5C8(char *, int, int, int, int, int);

void func_0A9490(void) {
    D_0020B860[0] = 0;
    memset(D_002C9108, 0, 0xc00);
    memset(D_002B6508, 0, 0x12c00);
    g_TEXMGR_LastTex = 0xBEBEBEBE;
    D_0020B854[0] = func_0AA5C8(D_0020B470, D_0020B460[0], 1, 0, 0, 0);
    D_0020B858[0] = func_0AA5C8(D_0020B470, D_0020B460[0], 1, 0, 0, 0);
}
