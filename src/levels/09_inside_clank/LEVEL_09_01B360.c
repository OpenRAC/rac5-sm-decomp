/* LEVEL_09:0x01B360 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_01B328(int a0, int a1);

void func_01B360(void)
{
    func_01B328(1, 0xFFFF);
}
