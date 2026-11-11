/* LEVEL_04:0x167B80 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_167B48(int a0, int a1);

void func_167B80(void)
{
    func_167B48(1, 0xFFFF);
}
