typedef struct {
    char pad[0x58];
    char *p58;
} Obj;

typedef struct {
    char pad[0x6C];
    int flag;
    char pad2[0xD8 - 0x70];
    float lo;
    float hi;
} Inner;

extern void func_01C2A8(int a, int b, char *c, int d, int e, int f, int g,
                        float h);

void f(Obj *a0, int b, int c)
{
    Inner *p = (Inner *)a0->p58;
    float v;

    if (p->flag)
        v = p->hi;
    else
        v = p->lo;
    func_01C2A8(b, c, (char *)a0 + 0x30, 0x529, 0x101, 0x2, 0x1, v);
}
