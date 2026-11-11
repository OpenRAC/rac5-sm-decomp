/* LEVEL_07:0x03B650 -- placement copy of LEVEL_02_03FBD0.c: forwards two arguments to a helper with a fixed global block. */
extern char D_0024AA40[];
extern int func_03AAD8(void *, void *, void *);
int func_03B650(void *a, void *b)
{
    return func_03AAD8(D_0024AA40, a, b);
}
