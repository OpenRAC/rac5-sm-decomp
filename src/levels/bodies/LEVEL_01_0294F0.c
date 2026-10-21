/* LEVEL_01:0x0294F0 -- clamps two float fields of a record to zero. */
typedef struct {
    char pad[0x58];
    float f58;
    char pad2[0x28];
    float f84;
} Rec;

void func_0294F0(Rec *p, float v)
{
    float neg;
    float f0;
    float f1;
    float zero;

    neg = -v;
    f0 = p->f58;
    zero = 0.0f;
    f0 = f0 + neg;
    p->f58 = f0;
    if (f0 < zero) {
        p->f58 = zero;
    }
    f1 = p->f84 + v * -0.1f;
    p->f84 = f1;
    if (f1 < zero) {
        p->f84 = zero;
    }
}
