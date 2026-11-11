/* LEVEL_10:0x1803D0 -- placement copy of LEVEL_01_17DD90.c: stores a constant in a record, calls two helpers and stores the first result in the record. */

extern char D_0039FEE0[];
extern char D_0022B7F0[];
extern unsigned int func_10D908(int a0, int a1, int a2, void *a3, int a4);
extern void func_09DA90(unsigned int a0, int a1, int a2, float f0, float f1);

void func_1803D0(void)
{
    char *s;
    unsigned int r;

    s = D_0039FEE0;
    *(int *)(s + 0x38) = 0x18;
    r = func_10D908(0x10, 0x480, 0, D_0022B7F0, 0xA82);
    *(unsigned int *)(s + 0x34) = r;
    func_09DA90(r, *(int *)(s + 0x38), 0xB, 1.0f, 0.0f);
}
