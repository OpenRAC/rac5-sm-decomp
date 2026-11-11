/* LEVEL_10:0x04DCB8 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_04DC80(int a0, int a1);

void func_04DCB8(void)
{
    func_04DC80(1, 0xFFFF);
}
