typedef struct {
    int f00;
    char pad[0x54];
    float f58;
} Inner;

typedef struct {
    char pad[0x58];
    Inner *f58;
} Outer;

void func_164910(void *a0, int a1);

void func_164360(Outer *a0)
{
    Inner *v = a0->f58;
    float f = v->f58 - 1.0f;
    int a1 = v->f00;
    v->f58 = f;
    if (f <= 0.0f) {
        func_164910(a0, a1);
    }
}
