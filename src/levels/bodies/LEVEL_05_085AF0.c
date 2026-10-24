typedef struct {
    char pad[0x30];
    float v;
} Obj;

extern int func_029068(int a);

float f(Obj *a0)
{
    float r;

    if (func_029068(4))
        return -a0->v;
    r = a0->v;
    return r;
}
