typedef struct {
    char pad[0x08];
    float a;
    float b;
} G;

extern G D_14B390;
extern char D_14B3A0;

void TexOffset__Q34scee3Psp2Guff(float p0, float p1)
{
    D_14B3A0 = 1;
    D_14B390.a = p0;
    D_14B390.b = p1;
}
