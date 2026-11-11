/* LEVEL_03:0x02F368 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_02F330(int a0, int a1);

void func_02F368(void)
{
    func_02F330(1, 0xFFFF);
}
