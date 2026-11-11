/* LEVEL_24:0x022060 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_022028(int a0, int a1);

void func_022060(void)
{
    func_022028(1, 0xFFFF);
}
