/* LEVEL_04:0x03C768 -- placement copy of LEVEL_02_03FBD0.c: forwards two arguments to a helper with a fixed global block. */
extern char D_0024F950[];
extern int func_03BBF0(void *, void *, void *);
int func_03C768(void *a, void *b)
{
    return func_03BBF0(D_0024F950, a, b);
}
