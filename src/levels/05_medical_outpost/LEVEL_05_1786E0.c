/* LEVEL_05:0x1786E0 -- placement copy of LEVEL_01_186D68.c: calls a helper with a fixed table address, stores two scalar fields and forwards the arguments to another helper. */

extern char D_0020FEA0[];
extern void func_09E0D0(void *a0, int a1);
extern void func_178778(void *a0, int a1, int a2);

void func_1786E0(char *a0, int a1, int a2, int a3, int a4)
{
    func_09E0D0(a0, (int)D_0020FEA0);
    *(int *)(a0 + 0x24) = a3;
    *(int *)(a0 + 0x28) = a4;
    func_178778(a0, a1, a2);
}
