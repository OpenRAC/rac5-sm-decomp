/* LEVEL_23:0x030938 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_030900(int a0, int a1);

void func_030938(void)
{
    func_030900(1, 0xFFFF);
}
