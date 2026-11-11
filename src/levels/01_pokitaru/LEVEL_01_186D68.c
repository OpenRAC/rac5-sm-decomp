/* LEVEL_01:0x186D68 -- calls a helper with a fixed table address, stores two scalar fields and forwards the arguments to another helper. */

extern char D_00222AE0[];
extern void func_09FB18(void *a0, int a1);
extern void func_186E00(void *a0, int a1, int a2);

void func_186D68(char *a0, int a1, int a2, int a3, int a4)
{
    func_09FB18(a0, (int)D_00222AE0);
    *(int *)(a0 + 0x24) = a3;
    *(int *)(a0 + 0x28) = a4;
    func_186E00(a0, a1, a2);
}
