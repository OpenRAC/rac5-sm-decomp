/* LEVEL_04:0x1F0A68 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_1F09A8(int a0, int a1);

void func_1F0A68(void)
{
    func_1F09A8(1, 0xFFFF);
}
