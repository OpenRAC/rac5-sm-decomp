/* LEVEL_07:0x18AE70 -- placement copy of LEVEL_01_17DD90.c: stores a constant in a record, calls two helpers and stores the first result in the record. */

extern char D_003AC408[];
extern char D_00238010[];
extern unsigned int func_112740(int a0, int a1, int a2, void *a3, int a4);
extern void func_09E990(unsigned int a0, int a1, int a2, float f0, float f1);

void func_18AE70(void)
{
    char *s;
    unsigned int r;

    s = D_003AC408;
    *(int *)(s + 0x38) = 0x18;
    r = func_112740(0x10, 0x480, 0, D_00238010, 0xA82);
    *(unsigned int *)(s + 0x34) = r;
    func_09E990(r, *(int *)(s + 0x38), 0xB, 1.0f, 0.0f);
}
