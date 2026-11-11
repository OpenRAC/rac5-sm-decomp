/* LEVEL_10.REL @ 0x12F318 — 76 octets, lwc1 */
typedef struct {
    char pad58[0x58];
    int f58;
} Big;

typedef struct {
    float p00;
    float p04;
    float p08;
    float p0C;
    float p10;
    float f14;
    float f18;
    float f1C;
    float f20;
} Rec;

extern Rec *D_0020FB90;

void func_081000(int a0, Rec *a1, float f12, int a2, float f13, int a3,
                 float f14, int a4, float f15, int a5, int a6, int a7);

void func_12F318(int a0)
{
    Rec *q = D_0020FB90;

    if (q != 0) {
        func_081000(a0, q, q->f14, 0, q->f18, 0, q->f1C, 0, q->f20, 0, 0, 1);
    }
}
