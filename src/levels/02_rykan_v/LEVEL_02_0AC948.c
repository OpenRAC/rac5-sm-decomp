/* LEVEL_02:0x0AC948 -- placement copy of LEVEL_01_0A6038.c: placement copy of FRONTEND_00AA68.c: looks the n-th slot of the global table up. */
extern char D_002C7890[];

extern int func_0ACA20(void *);

int func_0AC948(int a)
{
    return func_0ACA20(&D_002C7890[0x30C8 + a * 0x18]);
}
