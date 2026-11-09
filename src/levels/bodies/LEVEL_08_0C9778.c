/* LEVEL_08:0x0C9778 -- placement copy of LEVEL_01_0BE850.c: calls a three-argument helper on four record words, then runs a final helper. */

extern void func_000580(int a0, int a1, int a2, int a3);
extern void func_0C0F10(int a0);

void func_0C9778(char *a0)
{
    func_000580(*(int *)(a0 + 4), 0, 0, 1);
    func_000580(*(int *)(a0 + 8), 3, 0, 1);
    func_000580(*(int *)(a0 + 0xC), 5, 0, 1);
    func_000580(*(int *)(a0 + 0), 1, 0, 1);
    func_0C0F10(1);
}
