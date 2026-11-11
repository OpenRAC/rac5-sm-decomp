/* LEVEL_09:0x177BB8 -- placement copy of LEVEL_01_184128.c: resets an object's runtime fields, runs its setup helpers, then clamps a state byte. */

extern char *D_001DE3E4;

int func_023920(int a, int b);
void func_171040(void *a);
void func_1755D8(void *a);
void func_1720B8(void *a);
void func_1769C8(void *a);

void func_177BB8(char *a0)
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
    func_023920(0x0B, *(int *)(D_001DE3E4 + 0xF8));
    func_171040(a0);
    func_1755D8(s0);
    a0[0x46] = 0;
    func_1720B8(*(char **)(a0 + 0x58) + 0x44);
    if (a0 != 0) {
        v = a0[0x45];
        if (v >= 4) {
            if (v < 0xFE) {
                a0[0x45] = 0;
            }
        }
    }
    func_1769C8(a0);
}
