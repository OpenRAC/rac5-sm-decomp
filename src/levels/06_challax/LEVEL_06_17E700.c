/* LEVEL_06:0x17E700 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_17E6C8(int a0, int a1);

void func_17E700(void)
{
    func_17E6C8(1, 0xFFFF);
}
