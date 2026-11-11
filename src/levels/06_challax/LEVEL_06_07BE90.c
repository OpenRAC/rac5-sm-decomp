/* LEVEL_06:0x07BE90 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_07BE58(int a0, int a1);

void func_07BE90(void)
{
    func_07BE58(1, 0xFFFF);
}
