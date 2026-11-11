/* LEVEL_08:0x20F448 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_20F410(int a0, int a1);

void func_20F448(void)
{
    func_20F410(1, 0xFFFF);
}
