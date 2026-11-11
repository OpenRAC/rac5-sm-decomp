/* LEVEL_22:0x060E78 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_060E40(int a0, int a1);

void func_060E78(void)
{
    func_060E40(1, 0xFFFF);
}
