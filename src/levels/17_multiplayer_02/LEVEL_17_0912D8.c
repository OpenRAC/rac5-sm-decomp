extern char D_0025AA58[];
extern char D_00247E58[];
extern int D_00197E70[];
extern int D_00197A70[];
extern char D_00197A80[];
extern int D_00197E64[];
extern int D_00197E68[];
extern int g_TEXMGR_LastTex;

void *memset(void *, int, unsigned int);
int func_092320(char *, int, int, int, int, int);

void func_0912D8(void) {
    D_00197E70[0] = 0;
    memset(D_0025AA58, 0, 0xc00);
    memset(D_00247E58, 0, 0x12c00);
    g_TEXMGR_LastTex = 0xBEBEBEBE;
    D_00197E64[0] = func_092320(D_00197A80, D_00197A70[0], 1, 0, 0, 0);
    D_00197E68[0] = func_092320(D_00197A80, D_00197A70[0], 1, 0, 0, 0);
}
