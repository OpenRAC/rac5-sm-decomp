/* LEVEL_17:0x15EF50 -- issues five timed calls on a pair of counters in the owner record. */

void func_0A5888(int a0, int a1, int a2);
void func_0A57A0(int a0, int a1);
void func_0A57D8(int a0, int a1);
void func_0A5DE0(void);
void func_0A5758(int a0, int a1);
void func_0A56A8(int a0, int a1);

void func_15EF50(char *a0)
{
    char *s0;

    s0 = *(char **)(a0 + 0x58);
    func_0A5888(*(int *)(*(char **)s0 + 0xF4) - 1, 3, 3);
    func_0A57A0(*(int *)(*(char **)s0 + 0xF4) - 1, *(int *)(s0 + 0x28));
    func_0A57D8(*(int *)(*(char **)s0 + 0xF4) - 1, 0x28);
    func_0A5DE0();
    func_0A5758(*(int *)(*(char **)s0 + 0xF4) - 1, 0x64);
    func_0A56A8(*(int *)(*(char **)s0 + 0xF4) - 1, 0x5A);
}
