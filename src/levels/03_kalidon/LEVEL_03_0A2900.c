extern char D_002CCA88[];
extern char D_002B9E88[];
extern int D_0020EF20[];
extern int D_0020EB20[];
extern char D_0020EB30[];
extern int D_0020EF14[];
extern int D_0020EF18[];
extern int g_TEXMGR_LastTex;

void *memset(void *, int, unsigned int);
int func_0A3A38(char *, int, int, int, int, int);

void func_0A2900(void) {
    D_0020EF20[0] = 0;
    memset(D_002CCA88, 0, 0xc00);
    memset(D_002B9E88, 0, 0x12c00);
    g_TEXMGR_LastTex = 0xBEBEBEBE;
    D_0020EF14[0] = func_0A3A38(D_0020EB30, D_0020EB20[0], 1, 0, 0, 0);
    D_0020EF18[0] = func_0A3A38(D_0020EB30, D_0020EB20[0], 1, 0, 0, 0);
}
