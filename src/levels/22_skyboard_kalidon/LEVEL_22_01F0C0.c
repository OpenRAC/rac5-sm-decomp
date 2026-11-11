/* LEVEL_22:0x01F0C0 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_01F088(int a0, int a1);

void func_01F0C0(void)
{
    func_01F088(1, 0xFFFF);
}
