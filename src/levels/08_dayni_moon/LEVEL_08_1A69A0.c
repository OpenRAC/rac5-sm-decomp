/* LEVEL_08:0x1A69A0 -- placement copy of LEVEL_01_184128.c: resets an object's runtime fields, runs its setup helpers, then clamps a state byte. */

extern char *D_0023D4A4;

int func_024EA8(int a, int b);
void func_19FE28(void *a);
void func_1A43C0(void *a);
void func_1A0EA0(void *a);
void func_1A57B0(void *a);

void func_1A69A0(char *a0)
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
    func_024EA8(0x0B, *(int *)(D_0023D4A4 + 0xF8));
    func_19FE28(a0);
    func_1A43C0(s0);
    a0[0x46] = 0;
    func_1A0EA0(*(char **)(a0 + 0x58) + 0x44);
    if (a0 != 0) {
        v = a0[0x45];
        if (v >= 4) {
            if (v < 0xFE) {
                a0[0x45] = 0;
            }
        }
    }
    func_1A57B0(a0);
}
