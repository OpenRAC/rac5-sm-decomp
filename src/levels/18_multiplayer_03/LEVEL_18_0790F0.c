typedef struct {
    char pad[0x30];
    float f30;
} Obj;

extern int func_0273E8(int);

float func_0790F0(Obj *p)
{
    int r = func_0273E8(4);

    if (r != 0) {
        return -p->f30;
    }
    return p->f30;
}
