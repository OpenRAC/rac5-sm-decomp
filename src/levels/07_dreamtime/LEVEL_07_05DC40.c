/* LEVEL_07:0x05DC40 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_05DC08(int a0, int a1);

void func_05DC40(void)
{
    func_05DC08(1, 0xFFFF);
}
