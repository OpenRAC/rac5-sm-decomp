/* FRONTEND:0x0242E8 -- calls the registered handler and returns its size. */
typedef int (*Handler)(void);

extern Handler D_0010554C;

int func_0242E8(void)
{
    return D_0010554C() + 8;
}
