/* LEVEL_24:0x02D028 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_02CFF0(int a0, int a1);

void func_02D028(void)
{
    func_02CFF0(1, 0xFFFF);
}
