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

extern Dst D_0021B860;

void func_019780(Src *s)
{
    D_0021B860.v00 = s->a;
    D_0021B860.v04 = s->b;
    D_0021B860.v08 = s->c;
    D_0021B860.v0C = s->d;
    D_0021B860.v70 = 0.6f;
}
