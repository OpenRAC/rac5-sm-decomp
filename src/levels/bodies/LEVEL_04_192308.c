/* LEVEL_04:0x192308 -- placement copy of LEVEL_01_186D68.c: calls a helper with a fixed table address, stores two scalar fields and forwards the arguments to another helper. */

extern char D_0023C4B0[];
extern void func_0A4D30(void *a0, int a1);
extern void func_1923A0(void *a0, int a1, int a2);

void func_192308(char *a0, int a1, int a2, int a3, int a4)
{
    func_0A4D30(a0, (int)D_0023C4B0);
    *(int *)(a0 + 0x24) = a3;
    *(int *)(a0 + 0x28) = a4;
    func_1923A0(a0, a1, a2);
}
