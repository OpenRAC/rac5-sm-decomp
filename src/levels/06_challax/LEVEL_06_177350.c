/* LEVEL_06:0x177350 -- placement copy of LEVEL_01_184128.c: resets an object's runtime fields, runs its setup helpers, then clamps a state byte. */

extern char *D_001E34E4;

int func_022D30(int a, int b);
void func_1707D8(void *a);
void func_174D70(void *a);
void func_171850(void *a);
void func_176160(void *a);

void func_177350(char *a0)
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
    func_022D30(0x0B, *(int *)(D_001E34E4 + 0xF8));
    func_1707D8(a0);
    func_174D70(s0);
    a0[0x46] = 0;
    func_171850(*(char **)(a0 + 0x58) + 0x44);
    if (a0 != 0) {
        v = a0[0x45];
        if (v >= 4) {
            if (v < 0xFE) {
                a0[0x45] = 0;
            }
        }
    }
    func_176160(a0);
}
