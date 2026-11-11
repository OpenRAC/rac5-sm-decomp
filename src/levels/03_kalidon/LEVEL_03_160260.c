/* LEVEL_03:0x160260 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_160228(int a0, int a1);

void func_160260(void)
{
    func_160228(1, 0xFFFF);
}
