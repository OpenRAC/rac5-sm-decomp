/* LEVEL_09:0x0A32E8 -- placement copy of LEVEL_01_0A6038.c: placement copy of FRONTEND_00AA68.c: looks the n-th slot of the global table up. */
extern char D_00297B10[];

extern int func_0A33C0(void *);

int func_0A32E8(int a)
{
    return func_0A33C0(&D_00297B10[0x30C8 + a * 0x18]);
}
