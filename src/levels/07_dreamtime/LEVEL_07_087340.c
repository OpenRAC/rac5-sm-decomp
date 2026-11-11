/* LEVEL_07:0x087340 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_087308(int a0, int a1);

void func_087340(void)
{
    func_087308(1, 0xFFFF);
}
