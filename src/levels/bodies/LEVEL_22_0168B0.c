typedef struct {
    float v00;
    float v04;
    float v08;
    float v0C;
    float pad[24];
    float v70;
} Dst;

typedef struct {
    float a;
    float b;
    float c;
    float d;
} Src;

extern Dst D_00181760;

void func_0168B0(Src *s)
{
    D_00181760.v00 = s->a;
    D_00181760.v04 = s->b;
    D_00181760.v08 = s->c;
    D_00181760.v0C = s->d;
    D_00181760.v70 = 0.6f;
}
