/* LEVEL_05:0x16BE88 -- clears two bits of a status word; a second function stores a byte, clears a bit, and calls a finisher. */
extern void func_169130(char *a0);
extern void func_16A5F0(char *a0);

void func_16BE88(char *a0)
{
    int v;

    v = *(int *)(a0 + 0x64);
    v = v & -33;
    v = v & -17;
    *(int *)(a0 + 0x64) = v;
}

void func_16BEA8(char *a0, int a1)
{
    unsigned char s1;
    int v;

    s1 = (unsigned char)a1;
    func_169130(a0);
    v = *(int *)(a0 + 0x64);
    a0[0x45] = s1;
    v = v & -9;
    *(int *)(a0 + 0x64) = v;
    func_16A5F0(a0);
}
