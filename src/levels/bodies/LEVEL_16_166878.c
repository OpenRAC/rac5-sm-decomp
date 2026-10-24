/* LEVEL_16.REL @ 0x166878 — 112 octets, lwc1/swc1 */
typedef struct {
    char pad14[0x14];
    float f14;
    float f18;
    float f1C;
    float f20;
} Q;

extern Q *D_001BE010;

void func_1679A8();
void func_073518(char *a0, Q *a1, float f12, int a2, float f13, int a3,
                 float f14, int a4, float f15, int a5, int a6, int a7);

void func_166878(char *a0, int a1)
{
    a0[0x45] = a1 ? 1 : 2;
    if (a1 != 0) {
        func_1679A8();
    } else {
        Q *q = D_001BE010;

        if (q != 0)
            func_073518(a0, q, q->f14, 0, q->f18, 0, q->f1C, 0, q->f20, 0, 0,
                        1);
    }
}
