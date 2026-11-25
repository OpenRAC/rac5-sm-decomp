/* LEVEL_22:0x094648 -- placement copy of LEVEL_01_0A6038.c: placement copy of FRONTEND_00AA68.c: looks the n-th slot of the global table up. */
extern char D_00205F50[];

extern int func_094730(void *);

int func_094648(int a)
{
    return func_094730(&D_00205F50[0x30C8 + a * 0x18]);
}
