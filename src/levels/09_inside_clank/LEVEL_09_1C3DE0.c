typedef struct {
    char pad[0x70];
    float v;
} Obj;

extern float D_002190AC;
extern int func_079108(Obj *a, int b);

int f(Obj *a0)
{
    float t = a0->v + D_002190AC;

    a0->v = t;
    if (t > 5.0f) {
        func_079108(a0, 1);
        return 1;
    }
    return 0;
}
