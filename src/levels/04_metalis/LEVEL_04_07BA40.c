/* LEVEL_04:0x07BA40 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_07BA08(int a0, int a1);

void func_07BA40(void)
{
    func_07BA08(1, 0xFFFF);
}
