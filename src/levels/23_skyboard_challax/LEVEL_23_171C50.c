/* LEVEL_23:0x171C50 -- placement copy of LEVEL_01_186D68.c: calls a helper with a fixed table address, stores two scalar fields and forwards the arguments to another helper. */

extern char D_001F3AB0[];
extern void func_096860(void *a0, int a1);
extern void func_171CE8(void *a0, int a1, int a2);

void func_171C50(char *a0, int a1, int a2, int a3, int a4)
{
    func_096860(a0, (int)D_001F3AB0);
    *(int *)(a0 + 0x24) = a3;
    *(int *)(a0 + 0x28) = a4;
    func_171CE8(a0, a1, a2);
}
