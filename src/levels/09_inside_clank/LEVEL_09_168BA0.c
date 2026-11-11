/* LEVEL_09:0x168BA0 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_168B68(int a0, int a1);

void func_168BA0(void)
{
    func_168B68(1, 0xFFFF);
}
