/* LEVEL_09:0x171820 -- placement copy of LEVEL_01_17DD90.c: stores a constant in a record, calls two helpers and stores the first result in the record. */

extern char D_0037E158[];
extern char D_0020B320[];
extern unsigned int func_108AE0(int a0, int a1, int a2, void *a3, int a4);
extern void func_099C68(unsigned int a0, int a1, int a2, float f0, float f1);

void func_171820(void)
{
    char *s;
    unsigned int r;

    s = D_0037E158;
    *(int *)(s + 0x38) = 0x18;
    r = func_108AE0(0x10, 0x480, 0, D_0020B320, 0xA82);
    *(unsigned int *)(s + 0x34) = r;
    func_099C68(r, *(int *)(s + 0x38), 0xB, 1.0f, 0.0f);
}
