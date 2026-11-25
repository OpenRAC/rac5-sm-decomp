/* LEVEL_05:0x0A45F8 -- placement copy of LEVEL_01_0A6038.c: placement copy of FRONTEND_00AA68.c: looks the n-th slot of the global table up. */
extern char D_0029C250[];

extern int func_0A46D0(void *);

int func_0A45F8(int a)
{
    return func_0A46D0(&D_0029C250[0x30C8 + a * 0x18]);
}
