/* LEVEL_09:0x02AF58 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_02AF20(int a0, int a1);

void func_02AF58(void)
{
    func_02AF20(1, 0xFFFF);
}
