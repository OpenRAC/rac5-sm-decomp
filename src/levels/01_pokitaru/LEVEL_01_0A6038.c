/* LEVEL_01:0x0A6038 -- placement copy of FRONTEND_00AA68.c: looks the n-th slot of the global table up. */
extern char D_002B0390[];

extern int func_0A6110(void *);

int func_0A6038(int a)
{
    return func_0A6110(&D_002B0390[0x30C8 + a * 0x18]);
}
