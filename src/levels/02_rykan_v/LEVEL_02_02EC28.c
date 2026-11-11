/* LEVEL_02:0x02EC28 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_02EBF0(int a0, int a1);

void func_02EC28(void)
{
    func_02EBF0(1, 0xFFFF);
}
