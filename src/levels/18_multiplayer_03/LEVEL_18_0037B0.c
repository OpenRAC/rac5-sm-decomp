typedef struct {
    char pad[0x2C0];
    float a;
    float b;
} T;

typedef struct {
    T *p;
} Holder;

extern Holder D_0019C15C;

void f(float x, float y)
{
    D_0019C15C.p->a = x;
    D_0019C15C.p->b = y;
}
