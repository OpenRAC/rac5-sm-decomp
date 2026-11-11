/* LEVEL_04:0x150010 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_14FFD8(int a0, int a1);

void func_150010(void)
{
    func_14FFD8(1, 0xFFFF);
}
