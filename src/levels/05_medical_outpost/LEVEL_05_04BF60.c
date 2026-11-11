/* LEVEL_05:0x04BF60 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_04B898(int a0, int a1);

void func_04BF60(void)
{
    func_04B898(1, 0xFFFF);
}
