typedef struct {
    char pad[0x14];
    float f14;
    char pad2[0x4];
    float f1C;
} S;

void func_20FB58(S *a0)
{
    float t = a0->f14 + 0.033333335f;

    a0->f14 = t;
    if (a0->f1C <= t) {
        a0->f14 = t - a0->f1C;
    }
}
