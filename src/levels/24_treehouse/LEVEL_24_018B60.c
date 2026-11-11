/* LEVEL_24:0x018B60 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_018B28(int a0, int a1);

void func_018B60(void)
{
    func_018B28(1, 0xFFFF);
}
