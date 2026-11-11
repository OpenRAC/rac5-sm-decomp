/* LEVEL_03:0x184838 -- placement copy of LEVEL_01_184128.c: resets an object's runtime fields, runs its setup helpers, then clamps a state byte. */

extern char *D_0020CC64;

int func_0244F8(int a, int b);
void func_17DCC0(void *a);
void func_182258(void *a);
void func_17ED38(void *a);
void func_183648(void *a);

void func_184838(char *a0)
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
    func_0244F8(0x0B, *(int *)(D_0020CC64 + 0xF8));
    func_17DCC0(a0);
    func_182258(s0);
    a0[0x46] = 0;
    func_17ED38(*(char **)(a0 + 0x58) + 0x44);
    if (a0 != 0) {
        v = a0[0x45];
        if (v >= 4) {
            if (v < 0xFE) {
                a0[0x45] = 0;
            }
        }
    }
    func_183648(a0);
}
