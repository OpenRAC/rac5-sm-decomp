extern char D_002C7508[];
extern char D_002B4908[];
extern int D_0020ABA0[];
extern int D_0020A7A0[];
extern char D_0020A7B0[];
extern int D_0020AB94[];
extern int D_0020AB98[];
extern int g_TEXMGR_LastTex;

void *memset(void *, int, unsigned int);
int func_0A5CB8(char *, int, int, int, int, int);

void func_0A4B80(void) {
    D_0020ABA0[0] = 0;
    memset(D_002C7508, 0, 0xc00);
    memset(D_002B4908, 0, 0x12c00);
    g_TEXMGR_LastTex = 0xBEBEBEBE;
    D_0020AB94[0] = func_0A5CB8(D_0020A7B0, D_0020A7A0[0], 1, 0, 0, 0);
    D_0020AB98[0] = func_0A5CB8(D_0020A7B0, D_0020A7A0[0], 1, 0, 0, 0);
}
