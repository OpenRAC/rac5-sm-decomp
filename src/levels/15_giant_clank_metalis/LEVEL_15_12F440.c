/* LEVEL_15:0x12F440 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_12F408(int a0, int a1);

void func_12F440(void)
{
    func_12F408(1, 0xFFFF);
}
