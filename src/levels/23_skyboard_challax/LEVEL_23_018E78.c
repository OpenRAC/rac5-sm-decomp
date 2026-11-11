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

extern G D_001FD030;

void func_018E78(V *src, float v)
{
    D_001FD030.f00 = src->f00;
    D_001FD030.f04 = src->f04;
    D_001FD030.f08 = src->f08;
    D_001FD030.f0C = src->f0C;
    D_001FD030.f10 = v;
}
