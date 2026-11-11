/* LEVEL_01:0x03B120 -- placement copy of LEVEL_02_03FBD0.c: forwards two arguments to a helper with a fixed global block. */
extern char D_00235140[];
extern int func_03A5A8(void *, void *, void *);
int func_03B120(void *a, void *b)
{
    return func_03A5A8(D_00235140, a, b);
}
