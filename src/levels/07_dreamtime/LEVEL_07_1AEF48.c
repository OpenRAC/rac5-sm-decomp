typedef struct {
    char pad[0x18];
    float f18;
} A;

typedef struct {
    int f00;
} B;

typedef struct {
    char pad[0x54];
    A *p54;
    B *p58;
} O;

void func_1AF518(void *a0, int a1);

void func_1AEF48(O *a0)
{
    A *p = a0->p54;
    int id = a0->p58->f00;
    float t = p->f18 - 1.0f;

    p->f18 = t;
    if (t <= 0.0f)
        func_1AF518(a0, id);
}
