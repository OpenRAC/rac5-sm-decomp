/* LEVEL_18:0x16B5C0 -- placement copy of LEVEL_17_15EF50.c: issues five timed calls on a pair of counters in the owner record. */

void func_0A5320(int a0, int a1, int a2);
void func_0A5238(int a0, int a1);
void func_0A5270(int a0, int a1);
void func_0A5878(void);
void func_0A51F0(int a0, int a1);
void func_0A5140(int a0, int a1);

void func_16B5C0(char *a0)
{
    char *s0;

    s0 = *(char **)(a0 + 0x58);
    func_0A5320(*(int *)(*(char **)s0 + 0xF4) - 1, 3, 3);
    func_0A5238(*(int *)(*(char **)s0 + 0xF4) - 1, *(int *)(s0 + 0x28));
    func_0A5270(*(int *)(*(char **)s0 + 0xF4) - 1, 0x28);
    func_0A5878();
    func_0A51F0(*(int *)(*(char **)s0 + 0xF4) - 1, 0x64);
    func_0A5140(*(int *)(*(char **)s0 + 0xF4) - 1, 0x5A);
}
