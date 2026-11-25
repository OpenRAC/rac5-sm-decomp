/* LEVEL_24:0x09F8B0 -- placement copy of LEVEL_01_0A6038.c: placement copy of FRONTEND_00AA68.c: looks the n-th slot of the global table up. */
extern char D_0027C250[];

extern int func_09F988(void *);

int func_09F8B0(int a)
{
    return func_09F988(&D_0027C250[0x30C8 + a * 0x18]);
}
