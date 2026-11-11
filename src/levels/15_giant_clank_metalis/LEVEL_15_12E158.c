/* LEVEL_15:0x12E158 -- builds a flag word from its argument, then calls two helpers on a local record. */
extern void func_07A808(void *rec, unsigned int mode, void *tab, int n, int a4, int a5, int a6);
extern int func_07A9E0(void *a);
extern char D_0012D2B0[];

int func_12E158(unsigned int a0)
{
    unsigned int local[4];
    unsigned int m;

    m = a0 & 0xFFFFFFC3;
    m |= 4;
    m &= 0xFFFFFFFC;
    m |= 1;
    func_07A808(local, m, D_0012D2B0, 44, 0, -1, 0);
    return func_07A9E0(local);
}
