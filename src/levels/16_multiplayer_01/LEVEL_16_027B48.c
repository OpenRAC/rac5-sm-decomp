/* LEVEL_16:0x027B48 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_027B10(int a0, int a1);

void func_027B48(void)
{
    func_027B10(1, 0xFFFF);
}
