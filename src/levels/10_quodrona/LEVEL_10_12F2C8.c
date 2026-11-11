/* LEVEL_10.REL @ 0x12F2C8 — 76 octets, lwc1 */
typedef struct {
    char pad14[0x14];
    float f14;
    float f18;
    float f1C;
    float f20;
} Rec;

extern Rec *D_0020FB8C;

void func_081000(int a0, Rec *a1, float f12, int a2, float f13, int a3,
                 float f14, int a4, float f15, int a5, int a6, int a7);

void func_12F2C8(int a0)
{
    Rec *q = D_0020FB8C;

    if (q != 0)
        func_081000(a0, q, q->f14, 0, q->f18, 0, q->f1C, 0, q->f20, 0, 0, 1);
}
