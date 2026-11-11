/* LEVEL_01:0x184128 -- resets an object's runtime fields, runs its setup helpers, then clamps a state byte. */

extern char *D_001F45E4;

int func_024628(int a, int b);
void func_17D5B0(void *a);
void func_181B48(void *a);
void func_17E628(void *a);
void func_182F38(void *a);

void func_184128(char *a0)
{
    char *s0;
    unsigned char v;

    s0 = *(char **)(a0 + 0x58);
    *(int *)(s0 + 0x04) = 0;
    *(int *)(s0 + 0x190) = 0;
    *(int *)(s0 + 0x194) = 0;
    s0[0x0C] = 0;
    s0[0x1C] = 0;
    *(int *)(s0 + 0x34) = 0;
    *(int *)(s0 + 0x40) = 0;
    func_024628(0x0B, *(int *)(D_001F45E4 + 0xF8));
    func_17D5B0(a0);
    func_181B48(s0);
    a0[0x46] = 0;
    func_17E628(*(char **)(a0 + 0x58) + 0x44);
    if (a0 != 0) {
        v = a0[0x45];
        if (v >= 4) {
            if (v < 0xFE) {
                a0[0x45] = 0;
            }
        }
    }
    func_182F38(a0);
}
