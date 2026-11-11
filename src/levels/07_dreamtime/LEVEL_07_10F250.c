/* LEVEL_07:0x10F250 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_10F218(int a0, int a1);

void func_10F250(void)
{
    func_10F218(1, 0xFFFF);
}
