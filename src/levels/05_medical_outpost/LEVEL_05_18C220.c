/* LEVEL_05:0x18C220 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_18C1E8(int a0, int a1);

void func_18C220(void)
{
    func_18C1E8(1, 0xFFFF);
}
