typedef struct {
    char pad[0x10C];
    float a;
    float b;
} T;

typedef struct {
    T *p;
} Holder;

extern Holder D_002078C8;

void f(float x, float y)
{
    D_002078C8.p->a = x;
    D_002078C8.p->b = y;
}
