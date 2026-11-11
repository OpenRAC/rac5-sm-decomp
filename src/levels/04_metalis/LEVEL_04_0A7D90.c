extern char D_002CC408[];
extern char D_002B9808[];
extern int D_0020FD60[];
extern int D_0020F960[];
extern char D_0020F970[];
extern int D_0020FD54[];
extern int D_0020FD58[];
extern int g_TEXMGR_LastTex;

void *memset(void *, int, unsigned int);
int func_0A8EC8(char *, int, int, int, int, int);

void func_0A7D90(void) {
    D_0020FD60[0] = 0;
    memset(D_002CC408, 0, 0xc00);
    memset(D_002B9808, 0, 0x12c00);
    g_TEXMGR_LastTex = 0xBEBEBEBE;
    D_0020FD54[0] = func_0A8EC8(D_0020F970, D_0020F960[0], 1, 0, 0, 0);
    D_0020FD58[0] = func_0A8EC8(D_0020F970, D_0020F960[0], 1, 0, 0, 0);
}
