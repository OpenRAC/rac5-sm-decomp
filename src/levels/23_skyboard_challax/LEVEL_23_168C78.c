/* LEVEL_23:0x168C78 -- placement copy of LEVEL_01_17DD90.c: stores a constant in a record, calls two helpers and stores the first result in the record. */

extern char D_00364F58[];
extern char D_001F3810[];
extern unsigned int func_101F18(int a0, int a1, int a2, void *a3, int a4);
extern void func_092338(unsigned int a0, int a1, int a2, float f0, float f1);

void func_168C78(void)
{
    char *s;
    unsigned int r;

    s = D_00364F58;
    *(int *)(s + 0x38) = 0x18;
    r = func_101F18(0x10, 0x480, 0, D_001F3810, 0xA82);
    *(unsigned int *)(s + 0x34) = r;
    func_092338(r, *(int *)(s + 0x38), 0xB, 1.0f, 0.0f);
}
