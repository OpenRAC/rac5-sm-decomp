/* LEVEL_05:0x051080 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_050ED0(int a0, int a1);

void func_051080(void)
{
    func_050ED0(1, 0xFFFF);
}
