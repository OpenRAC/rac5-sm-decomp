/* LEVEL_04:0x087C10 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_087BD8(int a0, int a1);

void func_087C10(void)
{
    func_087BD8(1, 0xFFFF);
}
