/* LEVEL_04:0x075AA8 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_075A70(int a0, int a1);

void func_075AA8(void)
{
    func_075A70(1, 0xFFFF);
}
