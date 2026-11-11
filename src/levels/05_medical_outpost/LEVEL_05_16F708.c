/* LEVEL_05:0x16F708 -- placement copy of LEVEL_01_17DD90.c: stores a constant in a record, calls two helpers and stores the first result in the record. */

extern char D_003827B0[];
extern char D_0020FC00[];
extern unsigned int func_10BB30(int a0, int a1, int a2, void *a3, int a4);
extern void func_09A7B8(unsigned int a0, int a1, int a2, float f0, float f1);

void func_16F708(void)
{
    char *s;
    unsigned int r;

    s = D_003827B0;
    *(int *)(s + 0x38) = 0x18;
    r = func_10BB30(0x10, 0x480, 0, D_0020FC00, 0xA82);
    *(unsigned int *)(s + 0x34) = r;
    func_09A7B8(r, *(int *)(s + 0x38), 0xB, 1.0f, 0.0f);
}
