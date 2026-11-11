/* LEVEL_03:0x1B8700 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_1B8528(int a0, int a1);

void func_1B8700(void)
{
    func_1B8528(1, 0xFFFF);
}
