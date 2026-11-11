/* FRONTEND:0x022168 -- clears the object's counters and the global latch. */
struct Obj {
    char pad00[4];
    int f04;
    int f08;
    int f0C;
    int f10;
    int f14;
};

extern int D_00032864[];

void func_022168(struct Obj *obj)
{
    D_00032864[0] = 0;
    obj->f04 = 0;
    obj->f10 = 0;
    obj->f14 = 0;
    obj->f0C = 0;
    obj->f08 = 0;
}
