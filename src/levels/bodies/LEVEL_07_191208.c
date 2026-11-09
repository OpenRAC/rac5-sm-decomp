/* LEVEL_07:0x191208 -- placement copy of LEVEL_01_184128.c: resets an object's runtime fields, runs its setup helpers, then clamps a state byte. */

extern char *D_002088E4;

int func_024BF0(int a, int b);
void func_18A690(void *a);
void func_18EC28(void *a);
void func_18B708(void *a);
void func_190018(void *a);

void func_191208(char *a0)
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
    func_024BF0(0x0B, *(int *)(D_002088E4 + 0xF8));
    func_18A690(a0);
    func_18EC28(s0);
    a0[0x46] = 0;
    func_18B708(*(char **)(a0 + 0x58) + 0x44);
    if (a0 != 0) {
        v = a0[0x45];
        if (v >= 4) {
            if (v < 0xFE) {
                a0[0x45] = 0;
            }
        }
    }
    func_190018(a0);
}
