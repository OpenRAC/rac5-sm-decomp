/* LEVEL_01:0x0B4CA0 -- when a word at a data symbol is nonzero, calls helpers with a byte-derived mask and a constant. */

extern char D_001FC368[];
extern void func_0A8E80(int a0, int a1);
extern void func_0A8CA0(unsigned int a0);
extern unsigned int func_1324B0(int a0);
extern void func_0AAEA0(int a0, int a1, unsigned int a2);

void func_0B4CA0(void)
{
    unsigned int r;

    if (*(int *)D_001FC368 != 0) {
        func_0A8E80(0, 0);
        func_0A8CA0((((unsigned int)*(unsigned char *)D_001FC368) << 24) | 0x00FFFFFFu);
        r = func_1324B0(0x2F6);
        func_0AAEA0(0x1CC, 0xFC, r);
    }
}
