/* LEVEL_04:0x023F08 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_023ED0(int a0, int a1);

void func_023F08(void)
{
    func_023ED0(1, 0xFFFF);
}
