/* LEVEL_02:0x09B550 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_09B518(int a0, int a1);

void func_09B550(void)
{
    func_09B518(1, 0xFFFF);
}
