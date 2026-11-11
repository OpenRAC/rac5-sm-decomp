/* LEVEL_06:0x050C08 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_050500(int a0, int a1);

void func_050C08(void)
{
    func_050500(1, 0xFFFF);
}
