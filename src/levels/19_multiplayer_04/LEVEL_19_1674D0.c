/* LEVEL_19:0x1674D0 -- placement copy of LEVEL_17_15EF50.c: issues five timed calls on a pair of counters in the owner record. */

void func_0A5C20(int a0, int a1, int a2);
void func_0A5B38(int a0, int a1);
void func_0A5B70(int a0, int a1);
void func_0A6178(void);
void func_0A5AF0(int a0, int a1);
void func_0A5A40(int a0, int a1);

void func_1674D0(char *a0)
{
    char *s0;

    s0 = *(char **)(a0 + 0x58);
    func_0A5C20(*(int *)(*(char **)s0 + 0xF4) - 1, 3, 3);
    func_0A5B38(*(int *)(*(char **)s0 + 0xF4) - 1, *(int *)(s0 + 0x28));
    func_0A5B70(*(int *)(*(char **)s0 + 0xF4) - 1, 0x28);
    func_0A6178();
    func_0A5AF0(*(int *)(*(char **)s0 + 0xF4) - 1, 0x64);
    func_0A5A40(*(int *)(*(char **)s0 + 0xF4) - 1, 0x5A);
}
