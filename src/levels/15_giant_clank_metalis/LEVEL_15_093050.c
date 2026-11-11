/* LEVEL_15:0x093050 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_093018(int a0, int a1);

void func_093050(void)
{
    func_093018(1, 0xFFFF);
}
