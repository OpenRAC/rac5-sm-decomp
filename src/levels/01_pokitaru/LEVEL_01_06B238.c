/* LEVEL_01:0x06B238 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_06B200(int a0, int a1);

void func_06B238(void)
{
    func_06B200(1, 0xFFFF);
}
