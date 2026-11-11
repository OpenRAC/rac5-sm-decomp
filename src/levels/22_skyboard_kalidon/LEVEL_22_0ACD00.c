/* LEVEL_22:0x0ACD00 -- placement copy of LEVEL_01_0BE850.c: calls a three-argument helper on four record words, then runs a final helper. */

extern void func_000418(int a0, int a1, int a2, int a3);
extern int func_0A4570(int index);

void func_0ACD00(char *a0)
{
    func_000418(*(int *)(a0 + 4), 0, 0, 1);
    func_000418(*(int *)(a0 + 8), 3, 0, 1);
    func_000418(*(int *)(a0 + 0xC), 5, 0, 1);
    func_000418(*(int *)(a0 + 0), 1, 0, 1);
    func_0A4570(1);
}
