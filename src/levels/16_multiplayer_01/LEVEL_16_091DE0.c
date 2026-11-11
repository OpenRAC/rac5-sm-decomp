extern char D_00269758[];
extern char D_00256B58[];
extern int D_001A4870[];
extern int D_001A4470[];
extern char D_001A4480[];
extern int D_001A4864[];
extern int D_001A4868[];
extern int g_TEXMGR_LastTex;

void *memset(void *, int, unsigned int);
int func_092E28(char *, int, int, int, int, int);

void func_091DE0(void) {
    D_001A4870[0] = 0;
    memset(D_00269758, 0, 0xc00);
    memset(D_00256B58, 0, 0x12c00);
    g_TEXMGR_LastTex = 0xBEBEBEBE;
    D_001A4864[0] = func_092E28(D_001A4480, D_001A4470[0], 1, 0, 0, 0);
    D_001A4868[0] = func_092E28(D_001A4480, D_001A4470[0], 1, 0, 0, 0);
}
