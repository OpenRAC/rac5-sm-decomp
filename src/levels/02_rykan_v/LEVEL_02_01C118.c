/* LEVEL_02:0x01C118 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_01C0E0(int a0, int a1);

void func_01C118(void)
{
    func_01C0E0(1, 0xFFFF);
}
