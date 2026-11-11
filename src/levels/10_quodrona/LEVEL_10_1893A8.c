/* LEVEL_10:0x1893A8 -- placement copy of LEVEL_01_186D68.c: calls a helper with a fixed table address, stores two scalar fields and forwards the arguments to another helper. */

extern char D_0022BA90[];
extern void func_0A0BF8(void *a0, int a1);
extern void func_189440(void *a0, int a1, int a2);

void func_1893A8(char *a0, int a1, int a2, int a3, int a4)
{
    func_0A0BF8(a0, (int)D_0022BA90);
    *(int *)(a0 + 0x24) = a3;
    *(int *)(a0 + 0x28) = a4;
    func_189440(a0, a1, a2);
}
