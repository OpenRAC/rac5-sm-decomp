/* LEVEL_07:0x193E48 -- placement copy of LEVEL_01_186D68.c: calls a helper with a fixed table address, stores two scalar fields and forwards the arguments to another helper. */

extern char D_002382B0[];
extern void func_0A1AF8(void *a0, int a1);
extern void func_193EE0(void *a0, int a1, int a2);

void func_193E48(char *a0, int a1, int a2, int a3, int a4)
{
    func_0A1AF8(a0, (int)D_002382B0);
    *(int *)(a0 + 0x24) = a3;
    *(int *)(a0 + 0x28) = a4;
    func_193EE0(a0, a1, a2);
}
