typedef struct {
    float f00;
    unsigned char b04;
} S;

extern S D_00398BF0;

void func_1D3DD0(float f12)
{
    float t;

    if (D_00398BF0.b04)
        return;
    t = D_00398BF0.f00 + f12;
    D_00398BF0.f00 = t;
    if (t > 15.0f)
        D_00398BF0.b04 = 1;
}
