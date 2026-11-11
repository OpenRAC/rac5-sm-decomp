/* LEVEL_02:0x08EC60 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_08EC28(int a0, int a1);

void func_08EC60(void)
{
    func_08EC28(1, 0xFFFF);
}
