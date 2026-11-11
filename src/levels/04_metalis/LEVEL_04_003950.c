typedef struct {
    char pad[0x2B4];
    float a;
    float b;
} T;

typedef struct {
    T *p;
} Holder;

extern Holder D_002083D4;

void f(float x, float y)
{
    D_002083D4.p->a = x;
    D_002083D4.p->b = y;
}
