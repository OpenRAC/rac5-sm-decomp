/* LEVEL_08:0x056AA0 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_056A68(int a0, int a1);

void func_056AA0(void)
{
    func_056A68(1, 0xFFFF);
}
