/* LEVEL_15:0x0F73A0 -- clears one flag word in a global block after a call. */
extern char D_002A8B58[];
extern void func_097980(void *);

void func_0F73A0(void)
{
    unsigned int high;
    char *block;

    func_097980(0);
    high = 0x40000;
    block = D_002A8B58;
    *(int *)(block + high + 0x4048) = 0;
}
