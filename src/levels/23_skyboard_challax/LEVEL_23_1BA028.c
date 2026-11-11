/* LEVEL_23:0x1BA028 -- placement copy of LEVEL_22_145FA0.c: builds a control word from a flags argument, calls two helpers on a local buffer and stores the second helper's result. */

void func_08C368(unsigned char *buf, unsigned int flags, int tbl, int n, int a, int b, int c);
int func_08C540(unsigned char *buf);

extern unsigned char D_001BB9F0[];

void func_1BA028(int *out, unsigned int flags)
{
    unsigned char buf[16];
    unsigned int f;

    f = (flags & 0xFFFFFFC3) | 0x18;
    f = (f & 0xFFFFFFFC) | 1;
    func_08C368(buf, f, (int)D_001BB9F0, 0xF0, 0, -1, 0);
    *out = func_08C540(buf);
}
