/* LEVEL_08:0x0B0930 -- placement copy of LEVEL_01_0A6038.c: placement copy of FRONTEND_00AA68.c: looks the n-th slot of the global table up. */
extern char D_002FF610[];

extern int func_0B0A08(void *);

int func_0B0930(int a)
{
    return func_0B0A08(&D_002FF610[0x30C8 + a * 0x18]);
}
