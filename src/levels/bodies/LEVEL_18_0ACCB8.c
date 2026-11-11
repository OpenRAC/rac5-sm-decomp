/* LEVEL_18:0x0ACCB8 -- placement copy of LEVEL_01_0BE850.c: calls a three-argument helper on four record words, then runs a final helper. */

extern void func_0003A0(int a0, int a1, int a2, int a3);
extern int func_0A40A8(int a);

void func_0ACCB8(char *a0)
{
    func_0003A0(*(int *)(a0 + 4), 0, 0, 1);
    func_0003A0(*(int *)(a0 + 8), 3, 0, 1);
    func_0003A0(*(int *)(a0 + 0xC), 5, 0, 1);
    func_0003A0(*(int *)(a0 + 0), 1, 0, 1);
    func_0A40A8(1);
}
