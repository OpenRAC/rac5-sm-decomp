/* LEVEL_22:0x145FA0 -- builds a control word from a flags argument, calls two helpers on a local buffer and stores the second helper's result. */

void func_087718(unsigned char *buf, unsigned int flags, int tbl, int n, int a, int b, int c);
int func_0878F0(unsigned char *buf);

extern unsigned char D_00147968[];

void func_145FA0(int *out, unsigned int flags)
{
    unsigned char buf[16];
    unsigned int f;

    f = (flags & 0xFFFFFFC3) | 0x18;
    f = (f & 0xFFFFFFFC) | 1;
    func_087718(buf, f, (int)D_00147968, 0xF0, 0, -1, 0);
    *out = func_0878F0(buf);
}
