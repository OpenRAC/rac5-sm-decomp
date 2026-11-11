/* LEVEL_10:0x10C338 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_10C300(int a0, int a1);

void func_10C338(void)
{
    func_10C300(1, 0xFFFF);
}
