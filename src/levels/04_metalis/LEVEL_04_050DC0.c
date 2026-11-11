/* LEVEL_04:0x050DC0 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_050D88(int a0, int a1);

void func_050DC0(void)
{
    func_050D88(1, 0xFFFF);
}
