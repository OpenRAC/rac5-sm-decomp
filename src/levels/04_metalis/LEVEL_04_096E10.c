/* LEVEL_04:0x096E10 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_096DD8(int a0, int a1);

void func_096E10(void)
{
    func_096DD8(1, 0xFFFF);
}
