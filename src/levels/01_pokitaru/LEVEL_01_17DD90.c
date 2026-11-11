/* LEVEL_01:0x17DD90 -- stores a constant in a record, calls two helpers and stores the first result in the record. */

extern char D_00396AC0[];
extern char D_00222840[];
extern unsigned int func_10F6F0(int a0, int a1, int a2, void *a3, int a4);
extern void func_09C9B0(unsigned int a0, int a1, int a2, float f0, float f1);

void func_17DD90(void)
{
    char *s;
    unsigned int r;

    s = D_00396AC0;
    *(int *)(s + 0x38) = 0x18;
    r = func_10F6F0(0x10, 0x480, 0, D_00222840, 0xA82);
    *(unsigned int *)(s + 0x34) = r;
    func_09C9B0(r, *(int *)(s + 0x38), 0xB, 1.0f, 0.0f);
}
