/* LEVEL_04:0x0F45C8 -- builds a masked control word and passes a local buffer to two helpers. */

void func_099A40(void *buf, unsigned int ctl, unsigned int tbl, int n, int a, int b, unsigned int c);
void func_099C18(void *buf);

extern unsigned char D_000F4748[];

void func_0F45C8(unsigned int a0)
{
    unsigned char buf[16];
    unsigned int ctl;

    ctl = ((a0 & 0xFFFFFFC3) | 0x20) & 0xFFFFFFFC;
    func_099A40(buf, ctl | 1, (unsigned int)D_000F4748, 64, 0, -1, 0);
    func_099C18(buf);
}
