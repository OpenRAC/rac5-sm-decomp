/* LEVEL_02:0x03FBD0 -- forwards two arguments to a helper with a fixed global block. */
extern char D_0024C650[];
extern int func_03F058(void *, void *, void *);
int func_03FBD0(void *a, void *b)
{
    return func_03F058(D_0024C650, a, b);
}
