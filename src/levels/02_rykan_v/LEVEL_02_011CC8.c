/* LEVEL_02:0x011CC8 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_011A70(int a0, int a1);

void func_011CC8(void)
{
    func_011A70(1, 0xFFFF);
}
