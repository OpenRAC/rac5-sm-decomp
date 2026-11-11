typedef struct {
    int f00;
    char pad[0x54];
    float f58;
} Inner;

typedef struct {
    char pad[0x58];
    Inner *p58;
} Outer;

void func_16D3C8(void *a0, int a1);

void func_16CDE8(Outer *a0)
{
    Inner *p = a0->p58;
    int id = p->f00;
    float t = p->f58 - 1.0f;

    p->f58 = t;
    if (t <= 0.0f)
        func_16D3C8(a0, id);
}
