/* LEVEL_06:0x170FB8 -- placement copy of LEVEL_01_17DD90.c: stores a constant in a record, calls two helpers and stores the first result in the record. */

extern char D_003837F8[];
extern char D_00210690[];
extern unsigned int func_105CC0(int a0, int a1, int a2, void *a3, int a4);
extern void func_0962D8(unsigned int a0, int a1, int a2, float f0, float f1);

void func_170FB8(void)
{
    char *s;
    unsigned int r;

    s = D_003837F8;
    *(int *)(s + 0x38) = 0x18;
    r = func_105CC0(0x10, 0x480, 0, D_00210690, 0xA82);
    *(unsigned int *)(s + 0x34) = r;
    func_0962D8(r, *(int *)(s + 0x38), 0xB, 1.0f, 0.0f);
}
