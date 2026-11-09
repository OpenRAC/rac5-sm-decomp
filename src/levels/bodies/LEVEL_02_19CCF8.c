/* LEVEL_02:0x19CCF8 -- placement copy of LEVEL_01_186D68.c: calls a helper with a fixed table address, stores two scalar fields and forwards the arguments to another helper. */

extern char D_00239E40[];
extern void func_0A6408(void *a0, int a1);
extern void func_19CD90(void *a0, int a1, int a2);

void func_19CCF8(char *a0, int a1, int a2, int a3, int a4)
{
    func_0A6408(a0, (int)D_00239E40);
    *(int *)(a0 + 0x24) = a3;
    *(int *)(a0 + 0x28) = a4;
    func_19CD90(a0, a1, a2);
}
