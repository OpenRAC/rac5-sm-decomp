typedef struct {
    char pad[0x20C];
    float a;
    char pad2[0x218 - 0x210];
    float b;
} T;

typedef struct {
    T *p;
} Holder;

extern Holder D_00203554;

void f(float x, float y)
{
    D_00203554.p->a = x;
    D_00203554.p->b = y;
}
