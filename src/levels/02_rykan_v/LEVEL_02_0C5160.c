/* LEVEL_02:0x0C5160 -- placement copy of LEVEL_01_0BE850.c: calls a three-argument helper on four record words, then runs a final helper. */

extern void func_000580(int a0, int a1, int a2, int a3);
extern int func_0BC930(int index);

void func_0C5160(char *a0)
{
    func_000580(*(int *)(a0 + 4), 0, 0, 1);
    func_000580(*(int *)(a0 + 8), 3, 0, 1);
    func_000580(*(int *)(a0 + 0xC), 5, 0, 1);
    func_000580(*(int *)(a0 + 0), 1, 0, 1);
    func_0BC930(1);
}
