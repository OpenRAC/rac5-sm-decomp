/* LEVEL_09:0x018B48 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_018B10(int a0, int a1);

void func_018B48(void)
{
    func_018B10(1, 0xFFFF);
}
