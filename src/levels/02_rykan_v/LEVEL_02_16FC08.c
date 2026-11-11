/* LEVEL_02:0x16FC08 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_16FBD0(int a0, int a1);

void func_16FC08(void)
{
    func_16FBD0(1, 0xFFFF);
}
