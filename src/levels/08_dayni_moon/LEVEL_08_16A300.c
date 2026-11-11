/* LEVEL_08:0x16A300 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_16A2C8(int a0, int a1);

void func_16A300(void)
{
    func_16A2C8(1, 0xFFFF);
}
