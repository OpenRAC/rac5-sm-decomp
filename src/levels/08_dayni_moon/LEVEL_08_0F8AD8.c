/* LEVEL_08:0x0F8AD8 -- placement copy of LEVEL_04_0F45C8.c: builds a masked control word and passes a local buffer to two helpers. */

void func_09E868(void *buf, unsigned int ctl, unsigned int tbl, int n, int a, int b, unsigned int c);
void func_09EA40(void *buf);

extern unsigned char D_000F8C58[];

void func_0F8AD8(unsigned int a0)
{
    unsigned char buf[16];
    unsigned int ctl;

    ctl = ((a0 & 0xFFFFFFC3) | 0x20) & 0xFFFFFFFC;
    func_09E868(buf, ctl | 1, (unsigned int)D_000F8C58, 64, 0, -1, 0);
    func_09EA40(buf);
}
