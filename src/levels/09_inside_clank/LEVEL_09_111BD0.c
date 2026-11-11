/* LEVEL_09:0x111BD0 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_111B98(int a0, int a1);

void func_111BD0(void)
{
    func_111B98(1, 0xFFFF);
}
