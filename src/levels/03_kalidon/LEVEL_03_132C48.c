/* LEVEL_03:0x132C48 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_132C10(int a0, int a1);

void func_132C48(void)
{
    func_132C10(1, 0xFFFF);
}
