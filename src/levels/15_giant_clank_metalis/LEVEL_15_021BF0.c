extern int D_00148C2C[];

struct Object {
    char pad[0x1C6C];
    int f1C6C;
    int f1C70;
};

int func_021BF0(void)
{
    struct Object *object = (struct Object *)D_00148C2C[0];
    int count = object->f1C70;

    if (count > 0)
        return count;
    return object->f1C6C;
}
