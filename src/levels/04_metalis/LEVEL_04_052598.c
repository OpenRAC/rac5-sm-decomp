/* LEVEL_04:0x052598 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_052560(int a0, int a1);

void func_052598(void)
{
    func_052560(1, 0xFFFF);
}
