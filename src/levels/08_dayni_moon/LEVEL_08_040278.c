/* LEVEL_08:0x040278 -- placement copy of LEVEL_02_03FBD0.c: forwards two arguments to a helper with a fixed global block. */
extern char D_002843D0[];
extern int func_03F700(void *, void *, void *);
int func_040278(void *a, void *b)
{
    return func_03F700(D_002843D0, a, b);
}
