typedef struct {
    char pad0[0x30];
    float f30;
} Obj;

extern int func_0287D8(int);

float func_081010(Obj *a0)
{
    if (func_0287D8(4)) {
        return -a0->f30;
    }
    return a0->f30;
}
