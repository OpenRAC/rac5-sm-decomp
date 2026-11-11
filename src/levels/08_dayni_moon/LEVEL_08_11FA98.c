/* LEVEL_08:0x11FA98 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_11FA60(int a0, int a1);

void func_11FA98(void)
{
    func_11FA60(1, 0xFFFF);
}
