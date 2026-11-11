/* LEVEL_07:0x19A638 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_19A380(int a0, int a1);

void func_19A638(void)
{
    func_19A380(1, 0xFFFF);
}
