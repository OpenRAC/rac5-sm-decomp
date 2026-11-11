/* LEVEL_02:0x18BBC0 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_18B930(int a0, int a1);

void func_18BBC0(void)
{
    func_18B930(1, 0xFFFF);
}
