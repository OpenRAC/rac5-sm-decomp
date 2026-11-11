/* LEVEL_24:0x16BD98 -- placement copy of LEVEL_01_186D68.c: calls a helper with a fixed table address, stores two scalar fields and forwards the arguments to another helper. */

extern char D_001F0F40[];
extern void func_099398(void *a0, int a1);
extern void func_16BE30(void *a0, int a1, int a2);

void func_16BD98(char *a0, int a1, int a2, int a3, int a4)
{
    func_099398(a0, (int)D_001F0F40);
    *(int *)(a0 + 0x24) = a3;
    *(int *)(a0 + 0x28) = a4;
    func_16BE30(a0, a1, a2);
}
