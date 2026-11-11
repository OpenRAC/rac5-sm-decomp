/* LEVEL_24:0x162DC0 -- placement copy of LEVEL_01_17DD90.c: stores a constant in a record, calls two helpers and stores the first result in the record. */

extern char D_00360AA8[];
extern char D_001F0CA0[];
extern unsigned int func_1066F0(int a0, int a1, int a2, void *a3, int a4);
extern void func_096230(unsigned int a0, int a1, int a2, float f0, float f1);

void func_162DC0(void)
{
    char *s;
    unsigned int r;

    s = D_00360AA8;
    *(int *)(s + 0x38) = 0x18;
    r = func_1066F0(0x10, 0x480, 0, D_001F0CA0, 0xA82);
    *(unsigned int *)(s + 0x34) = r;
    func_096230(r, *(int *)(s + 0x38), 0xB, 1.0f, 0.0f);
}
