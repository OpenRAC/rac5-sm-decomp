/* LEVEL_15:0x086900 -- placement copy of LEVEL_01_0A6038.c: placement copy of FRONTEND_00AA68.c: looks the n-th slot of the global table up. */
extern char D_001C83D0[];

extern int func_0869D8(void *);

int func_086900(int a)
{
    return func_0869D8(&D_001C83D0[0x30C8 + a * 0x18]);
}
