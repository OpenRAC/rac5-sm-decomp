/* LEVEL_03:0x187478 -- placement copy of LEVEL_01_186D68.c: calls a helper with a fixed table address, stores two scalar fields and forwards the arguments to another helper. */

extern char D_0023C0C0[];
extern void func_09F8A0(void *a0, int a1);
extern void func_187510(void *a0, int a1, int a2);

void func_187478(char *a0, int a1, int a2, int a3, int a4)
{
    func_09F8A0(a0, (int)D_0023C0C0);
    *(int *)(a0 + 0x24) = a3;
    *(int *)(a0 + 0x28) = a4;
    func_187510(a0, a1, a2);
}
