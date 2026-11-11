typedef struct {
    float x;
    float y;
    float z;
} Vec;

typedef struct {
    float a;
    float b;
    float c;
    float d;
    float e;
    float f;
    float g;
    int h;
} Args;

extern void func_0EDFF8(int a, Args *args, int c);

void f(int a0, Vec *b, Vec *c)
{
    Args args;

    args.a = b->x;
    args.b = b->y;
    args.c = b->z;
    args.d = c->x;
    args.e = c->y;
    args.f = c->z;
    args.g = 0.5f;
    args.h = 0;
    func_0EDFF8(a0, &args, 0);
}
