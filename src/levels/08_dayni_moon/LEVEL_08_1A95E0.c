/* LEVEL_08:0x1A95E0 -- placement copy of LEVEL_01_186D68.c: calls a helper with a fixed table address, stores two scalar fields and forwards the arguments to another helper. */

extern char D_0026E5F0[];
extern void func_0AA418(void *a0, int a1);
extern void func_1A9678(void *a0, int a1, int a2);

void func_1A95E0(char *a0, int a1, int a2, int a3, int a4)
{
    func_0AA418(a0, (int)D_0026E5F0);
    *(int *)(a0 + 0x24) = a3;
    *(int *)(a0 + 0x28) = a4;
    func_1A9678(a0, a1, a2);
}
