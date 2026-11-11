/* LEVEL_09:0x16F098 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_16F060(int a0, int a1);

void func_16F098(void)
{
    func_16F060(1, 0xFFFF);
}
