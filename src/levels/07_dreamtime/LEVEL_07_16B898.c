/* LEVEL_07:0x16B898 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_16B860(int a0, int a1);

void func_16B898(void)
{
    func_16B860(1, 0xFFFF);
}
