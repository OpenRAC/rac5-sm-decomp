typedef struct {
    char pad0[0x30];
    float f30;
} Obj;

extern int func_029E98(int);

float func_08B430(Obj *a0)
{
    if (func_029E98(4)) {
        return -a0->f30;
    }
    return a0->f30;
}
