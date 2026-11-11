/* LEVEL_04:0x15D858 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_15D700(int a0, int a1);

void func_15D858(void)
{
    func_15D700(1, 0xFFFF);
}
