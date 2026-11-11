/* LEVEL_24:0x0E4CA0 -- placement copy of LEVEL_04_0F45C8.c: builds a masked control word and passes a local buffer to two helpers. */

void func_08F748(void *buf, unsigned int ctl, unsigned int tbl, int n, int a, int b, unsigned int c);
void func_08F920(void *buf);

extern unsigned char D_000E4E20[];

void func_0E4CA0(unsigned int a0)
{
    unsigned char buf[16];
    unsigned int ctl;

    ctl = ((a0 & 0xFFFFFFC3) | 0x20) & 0xFFFFFFFC;
    func_08F748(buf, ctl | 1, (unsigned int)D_000E4E20, 64, 0, -1, 0);
    func_08F920(buf);
}
