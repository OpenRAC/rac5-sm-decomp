/* LEVEL_04:0x15C818 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_15C7B0(int a0, int a1);

void func_15C818(void)
{
    func_15C7B0(1, 0xFFFF);
}
