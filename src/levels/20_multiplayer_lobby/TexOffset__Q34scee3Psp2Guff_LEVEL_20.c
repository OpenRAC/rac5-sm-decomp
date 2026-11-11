typedef struct {
    char pad[8];
    float a;
    float b;
} T;

extern T D_00106DC0;
extern unsigned char D_00106DD0;

void TexOffset__Q34scee3Psp2Guff(float x, float y)
{
    D_00106DD0 = 1;
    D_00106DC0.a = x;
    D_00106DC0.b = y;
}
