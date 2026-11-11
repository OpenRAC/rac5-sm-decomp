/* LEVEL_08:0x1A0608 -- placement copy of LEVEL_01_17DD90.c: stores a constant in a record, calls two helpers and stores the first result in the record. */

extern char D_003E79D8[];
extern char D_0026E350[];
extern unsigned int func_11FE90(int a0, int a1, int a2, void *a3, int a4);
extern void func_0A6270(unsigned int a0, int a1, int a2, float f0, float f1);

void func_1A0608(void)
{
    char *s;
    unsigned int r;

    s = D_003E79D8;
    *(int *)(s + 0x38) = 0x18;
    r = func_11FE90(0x10, 0x480, 0, D_0026E350, 0xA82);
    *(unsigned int *)(s + 0x34) = r;
    func_0A6270(r, *(int *)(s + 0x38), 0xB, 1.0f, 0.0f);
}
