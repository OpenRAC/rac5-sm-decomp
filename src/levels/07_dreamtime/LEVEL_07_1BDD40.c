/* LEVEL_07:0x1BDD40 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_1BDD08(int a0, int a1);

void func_1BDD40(void)
{
    func_1BDD08(1, 0xFFFF);
}
