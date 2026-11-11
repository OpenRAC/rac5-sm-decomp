/* LEVEL_17:0x085B10 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_085AD8(int a0, int a1);

void func_085B10(void)
{
    func_085AD8(1, 0xFFFF);
}
