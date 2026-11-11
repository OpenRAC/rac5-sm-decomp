/* LEVEL_08:0x0805C0 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_080588(int a0, int a1);

void func_0805C0(void)
{
    func_080588(1, 0xFFFF);
}
