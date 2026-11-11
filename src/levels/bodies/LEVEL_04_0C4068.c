/* LEVEL_04:0x0C4068 -- placement copy of LEVEL_01_0BE850.c: calls a three-argument helper on four record words, then runs a final helper. */

extern void func_000418(int a0, int a1, int a2, int a3);
extern int func_0BB828(int index);

void func_0C4068(char *a0)
{
    func_000418(*(int *)(a0 + 4), 0, 0, 1);
    func_000418(*(int *)(a0 + 8), 3, 0, 1);
    func_000418(*(int *)(a0 + 0xC), 5, 0, 1);
    func_000418(*(int *)(a0 + 0), 1, 0, 1);
    func_0BB828(1);
}
