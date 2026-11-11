/* LEVEL_06:0x0AF4E0 -- placement copy of LEVEL_01_0B4CA0.c: when a word at a data symbol is nonzero, calls helpers with a byte-derived mask and a constant. */

extern char D_001EB268[];
extern void func_0A3650(int a0, int a1);
extern void func_0A3470(unsigned int a0);
extern unsigned int func_128B80(int a0);
extern void func_0A5670(int a0, int a1, unsigned int a2);

void func_0AF4E0(void)
{
    unsigned int r;

    if (*(int *)D_001EB268 != 0) {
        func_0A3650(0, 0);
        func_0A3470((((unsigned int)*(unsigned char *)D_001EB268) << 24) | 0x00FFFFFFu);
        r = func_128B80(0x2F6);
        func_0A5670(0x1CC, 0xFC, r);
    }
}
