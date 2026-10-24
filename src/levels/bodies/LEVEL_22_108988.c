/* LEVEL_22.REL @ 0x108988 — 76 octets, lwc1 */
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

extern Rec *D_00165F10;

void func_0733A8(int a0, Rec *a1, float f12, int a2, float f13, int a3,
                 float f14, int a4, float f15, int a5, int a6, int a7);

void func_108988(int a0)
{
    Rec *q = D_00165F10;

    if (q != 0) {
        func_0733A8(a0, q, q->f14, 0, q->f18, 0, q->f1C, 0, q->f20, 0, 0, 1);
    }
}
