/* LEVEL_02:0x193D20 -- placement copy of LEVEL_01_17DD90.c: stores a constant in a record, calls two helpers and stores the first result in the record. */

extern char D_003AEAD0[];
extern char D_00239BA0[];
extern unsigned int func_115A38(int a0, int a1, int a2, void *a3, int a4);
extern void func_0A32A0(unsigned int a0, int a1, int a2, float f0, float f1);

void func_193D20(void)
{
    char *s;
    unsigned int r;

    s = D_003AEAD0;
    *(int *)(s + 0x38) = 0x18;
    r = func_115A38(0x10, 0x480, 0, D_00239BA0, 0xA82);
    *(unsigned int *)(s + 0x34) = r;
    func_0A32A0(r, *(int *)(s + 0x38), 0xB, 1.0f, 0.0f);
}
