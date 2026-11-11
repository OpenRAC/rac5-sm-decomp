/* LEVEL_10:0x06D028 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_06CF68(int a0, int a1);

void func_06D028(void)
{
    func_06CF68(1, 0xFFFF);
}
