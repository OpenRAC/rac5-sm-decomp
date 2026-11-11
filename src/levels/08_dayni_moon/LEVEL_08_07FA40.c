/* LEVEL_08:0x07FA40 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_07FA08(int a0, int a1);

void func_07FA40(void)
{
    func_07FA08(1, 0xFFFF);
}
