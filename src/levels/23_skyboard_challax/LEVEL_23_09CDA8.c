/* LEVEL_23:0x09CDA8 -- placement copy of LEVEL_01_0A6038.c: placement copy of FRONTEND_00AA68.c: looks the n-th slot of the global table up. */
extern char D_002817D0[];

extern int func_09CE90(void *);

int func_09CDA8(int a)
{
    return func_09CE90(&D_002817D0[0x30C8 + a * 0x18]);
}
