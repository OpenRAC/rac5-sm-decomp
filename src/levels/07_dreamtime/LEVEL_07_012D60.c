/* LEVEL_07:0x012D60 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_012D28(int a0, int a1);

void func_012D60(void)
{
    func_012D28(1, 0xFFFF);
}
