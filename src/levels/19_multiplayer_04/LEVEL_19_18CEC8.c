typedef struct {
    char pad[0x70];
    float v;
} Obj;

extern float D_001E07AC;
extern int func_06F9A8(Obj *a, int b);

int f(Obj *a0)
{
    float t = a0->v + D_001E07AC;

    a0->v = t;
    if (t > 5.0f) {
        func_06F9A8(a0, 1);
        return 1;
    }
    return 0;
}
