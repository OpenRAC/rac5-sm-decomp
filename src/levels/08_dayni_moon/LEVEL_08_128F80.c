/* LEVEL_08:0x128F80 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_128F48(int a0, int a1);

void func_128F80(void)
{
    func_128F48(1, 0xFFFF);
}
