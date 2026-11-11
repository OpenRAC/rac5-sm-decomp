/* LEVEL_01:0x090028 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_08FFF0(int a0, int a1);

void func_090028(void)
{
    func_08FFF0(1, 0xFFFF);
}
