/* LEVEL_24:0x169158 -- placement copy of LEVEL_01_184128.c: resets an object's runtime fields, runs its setup helpers, then clamps a state byte. */

extern char *D_001C5264;

int func_022400(int a, int b);
void func_1625E0(void *a);
void func_166B78(void *a);
void func_163658(void *a);
void func_167F68(void *a);

void func_169158(char *a0)
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
    func_022400(0x0B, *(int *)(D_001C5264 + 0xF8));
    func_1625E0(a0);
    func_166B78(s0);
    a0[0x46] = 0;
    func_163658(*(char **)(a0 + 0x58) + 0x44);
    if (a0 != 0) {
        v = a0[0x45];
        if (v >= 4) {
            if (v < 0xFE) {
                a0[0x45] = 0;
            }
        }
    }
    func_167F68(a0);
}
