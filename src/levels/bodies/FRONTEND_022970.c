/* FRONTEND:0x022970 -- initialises the object and reports -1. */
struct Obj {
    int f00;
    int f04;
    int f08;
    int f0C;
    char f10;
};

int func_022970(struct Obj *p)
{
    p->f10 = 0;
    p->f00 = 0;
    p->f0C = 0;
    p->f08 = -1;
    return -1;
}
