/* LEVEL_22:0x10A088 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_10A050(int a0, int a1);

void func_10A088(void)
{
    func_10A050(1, 0xFFFF);
}
