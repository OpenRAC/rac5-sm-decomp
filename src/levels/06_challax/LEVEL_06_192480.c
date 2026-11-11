/* LEVEL_06:0x192480 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_192448(int a0, int a1);

void func_192480(void)
{
    func_192448(1, 0xFFFF);
}
