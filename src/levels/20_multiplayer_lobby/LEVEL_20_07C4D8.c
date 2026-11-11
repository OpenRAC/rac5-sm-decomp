extern char D_0018CF98[];
extern char D_0017A398[];
extern int D_00106F50[];
extern int D_00106B50[];
extern char D_00106B60[];
extern int D_00106F44[];
extern int D_00106F48[];
extern int g_TEXMGR_LastTex;

void *memset(void *, int, unsigned int);
int func_07D520(char *, int, int, int, int, int);

void func_07C4D8(void) {
    D_00106F50[0] = 0;
    memset(D_0018CF98, 0, 0xc00);
    memset(D_0017A398, 0, 0x12c00);
    g_TEXMGR_LastTex = 0xBEBEBEBE;
    D_00106F44[0] = func_07D520(D_00106B60, D_00106B50[0], 1, 0, 0, 0);
    D_00106F48[0] = func_07D520(D_00106B60, D_00106B50[0], 1, 0, 0, 0);
}
