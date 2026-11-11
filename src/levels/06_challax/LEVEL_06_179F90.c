/* LEVEL_06:0x179F90 -- placement copy of LEVEL_01_186D68.c: calls a helper with a fixed table address, stores two scalar fields and forwards the arguments to another helper. */

extern char D_00210930[];
extern void func_09A2F0(void *a0, int a1);
extern void func_17A028(void *a0, int a1, int a2);

void func_179F90(char *a0, int a1, int a2, int a3, int a4)
{
    func_09A2F0(a0, (int)D_00210930);
    *(int *)(a0 + 0x24) = a3;
    *(int *)(a0 + 0x28) = a4;
    func_17A028(a0, a1, a2);
}
