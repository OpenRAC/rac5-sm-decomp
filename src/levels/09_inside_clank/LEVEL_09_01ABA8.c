/* LEVEL_09:0x01ABA8 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_01AB70(int a0, int a1);

void func_01ABA8(void)
{
    func_01AB70(1, 0xFFFF);
}
