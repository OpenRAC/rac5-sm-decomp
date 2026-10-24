typedef struct {
    float f00;
    float f04;
    float f08;
    float f0C;
    float f10;
} V;

typedef struct {
    float f00;
    float f04;
    float f08;
    float f0C;
    float f10;
} G;

extern G D_001FBAB0;

void func_018958(V *src, float v)
{
    D_001FBAB0.f00 = src->f00;
    D_001FBAB0.f04 = src->f04;
    D_001FBAB0.f08 = src->f08;
    D_001FBAB0.f0C = src->f0C;
    D_001FBAB0.f10 = v;
}
