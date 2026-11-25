/* LEVEL_04:0x0AB248 -- placement copy of LEVEL_01_0A6038.c: placement copy of FRONTEND_00AA68.c: looks the n-th slot of the global table up. */
extern char D_002CAB90[];

extern int func_0AB320(void *);

int func_0AB248(int a)
{
    return func_0AB320(&D_002CAB90[0x30C8 + a * 0x18]);
}
