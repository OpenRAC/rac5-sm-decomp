/* LEVEL_06:0x08CA70 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_08CA38(int a0, int a1);

void func_08CA70(void)
{
    func_08CA38(1, 0xFFFF);
}
