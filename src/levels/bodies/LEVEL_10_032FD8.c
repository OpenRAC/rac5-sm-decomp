typedef struct {
    int    f0;
    int    f4;
    char   pad[0x78];
    float  f80;
} Self;

extern void func_032D28(char *, void *, void *);

void func_032FD8(Self *self, int unused, void *a, void *b, int c, int d,
                 float s)
{
    self->f4 = c;
    self->f80 = s;
    self->f0 = d;
    func_032D28((char *)self + 0x10, a, b);
}

int func_03300C(int *a, int *b)
{
    return *a - *b;
}
