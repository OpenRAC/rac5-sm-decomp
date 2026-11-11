/* FRONTEND:0x005C80 -- returns field 0x10 of the object, or zero when absent. */
struct Obj {
    char pad00[0x10];
    int f10;
};

int func_005C80(struct Obj *obj)
{
    int value;

    value = 0;
    if (obj != 0)
        value = obj->f10;
    return value;
}
