/* LEVEL_03:0x172938 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_172900(int a0, int a1);

void func_172938(void)
{
    func_172900(1, 0xFFFF);
}
