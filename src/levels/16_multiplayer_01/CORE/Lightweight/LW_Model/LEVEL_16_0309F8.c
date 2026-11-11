typedef struct {
    int f00;
    int f04;
    char pad[0x80 - 8];
    float f80;
} Obj;

extern void func_030748(char *p, int a, int b);

void f(Obj *self, int unused, int x2, int x3, int x4, int x5, float v)
{
    self->f04 = x4;
    self->f80 = v;
    self->f00 = x5;
    func_030748((char *)self + 0x10, x2, x3);
}

int cmp(int *a, int *b)
{
    return *a - *b;
}
