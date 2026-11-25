/* LEVEL_07:0x0A8038 -- placement copy of LEVEL_01_0A6038.c: placement copy of FRONTEND_00AA68.c: looks the n-th slot of the global table up. */
extern char D_002C5C90[];

extern int func_0A8110(void *);

int func_0A8038(int a)
{
    return func_0A8110(&D_002C5C90[0x30C8 + a * 0x18]);
}
