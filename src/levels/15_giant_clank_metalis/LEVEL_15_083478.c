extern char D_001C9C48[];
extern char D_001B7048[];
extern int D_0014B520[];
extern int D_0014B120[];
extern char D_0014B130[];
extern int D_0014B514[];
extern int D_0014B518[];
extern int g_TEXMGR_LastTex;

void *memset(void *, int, unsigned int);
int func_0845B0(char *, int, int, int, int, int);

void func_083478(void) {
    D_0014B520[0] = 0;
    memset(D_001C9C48, 0, 0xc00);
    memset(D_001B7048, 0, 0x12c00);
    g_TEXMGR_LastTex = 0xBEBEBEBE;
    D_0014B514[0] = func_0845B0(D_0014B130, D_0014B120[0], 1, 0, 0, 0);
    D_0014B518[0] = func_0845B0(D_0014B130, D_0014B120[0], 1, 0, 0, 0);
}
