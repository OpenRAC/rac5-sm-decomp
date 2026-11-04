extern int D_001C73AC[];

struct Object {
    char pad[0x1C6C];
    int f1C6C;
    int f1C70;
};

int func_025998(void)
{
    struct Object *object = (struct Object *)D_001C73AC[0];
    int count = object->f1C70;

    if (count > 0)
        return count;
    return object->f1C6C;
}
