/* LEVEL_03:0x0A5DB8 -- placement copy of LEVEL_01_0A6038.c: placement copy of FRONTEND_00AA68.c: looks the n-th slot of the global table up. */
extern char D_002CB210[];

extern int func_0A5E90(void *);

int func_0A5DB8(int a)
{
    return func_0A5E90(&D_002CB210[0x30C8 + a * 0x18]);
}
