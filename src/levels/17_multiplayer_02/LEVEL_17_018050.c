typedef struct {
    float x;
    float y;
    float z;
    float w;
} In;

typedef struct {
    float a;
    float b;
    float c;
    float d;
    float e;
} Out;

extern Out D_001CFBB0;

void f(In *a0, float extra)
{
    D_001CFBB0.a = a0->x;
    D_001CFBB0.b = a0->y;
    D_001CFBB0.c = a0->z;
    D_001CFBB0.d = a0->w;
    D_001CFBB0.e = extra;
}
