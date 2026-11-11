/* LEVEL_04:0x08F8C0 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_08F888(int a0, int a1);

void func_08F8C0(void)
{
    func_08F888(1, 0xFFFF);
}
