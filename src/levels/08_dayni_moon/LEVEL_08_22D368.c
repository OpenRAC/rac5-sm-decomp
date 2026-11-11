/* LEVEL_08:0x22D368 -- builds a flag word from its argument, then calls two helpers on a local record. */
extern void func_09E868(unsigned int *record, unsigned int first, unsigned int second, int third, int fourth, int fifth, unsigned int sixth);
extern void func_09EA40(void *a);
extern char D_0022DF08[];

void func_22D368(unsigned int a0)
{
    unsigned int local[4];
    unsigned int m;

    m = a0 & 0xFFFFFFC3;
    m |= 0x18;
    m &= 0xFFFFFFFC;
    m |= 1;
    func_09E868(local, m, (unsigned int)D_0022DF08, 40, 0, -1, 0);
    func_09EA40(local);
}
