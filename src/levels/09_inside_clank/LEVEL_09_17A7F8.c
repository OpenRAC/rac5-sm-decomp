/* LEVEL_09:0x17A7F8 -- placement copy of LEVEL_01_186D68.c: calls a helper with a fixed table address, stores two scalar fields and forwards the arguments to another helper. */

extern char D_0020B5C0[];
extern void func_09CDD0(void *a0, int a1);
extern void func_17A890(void *a0, int a1, int a2);

void func_17A7F8(char *a0, int a1, int a2, int a3, int a4)
{
    func_09CDD0(a0, (int)D_0020B5C0);
    *(int *)(a0 + 0x24) = a3;
    *(int *)(a0 + 0x28) = a4;
    func_17A890(a0, a1, a2);
}
