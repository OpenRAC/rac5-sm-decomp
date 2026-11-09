/* LEVEL_10:0x186768 -- placement copy of LEVEL_01_184128.c: resets an object's runtime fields, runs its setup helpers, then clamps a state byte. */

extern char *D_001FD5E4;

int func_023F90(int a, int b);
void func_17FBF0(void *a);
void func_184188(void *a);
void func_180C68(void *a);
void func_185578(void *a);

void func_186768(char *a0)
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
    func_023F90(0x0B, *(int *)(D_001FD5E4 + 0xF8));
    func_17FBF0(a0);
    func_184188(s0);
    a0[0x46] = 0;
    func_180C68(*(char **)(a0 + 0x58) + 0x44);
    if (a0 != 0) {
        v = a0[0x45];
        if (v >= 4) {
            if (v < 0xFE) {
                a0[0x45] = 0;
            }
        }
    }
    func_185578(a0);
}
