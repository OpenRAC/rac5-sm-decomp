/* LEVEL_07:0x1E0750 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_1E0440(int a0, int a1);

void func_1E0750(void)
{
    func_1E0440(1, 0xFFFF);
}
