extern int D_001A1AB4[];

struct Object {
    char pad[0x1C6C];
    int f1C6C;
    int f1C70;
};

int func_025960(void)
{
    struct Object *object = (struct Object *)D_001A1AB4[0];
    int count = object->f1C70;

    if (count > 0)
        return count;
    return object->f1C6C;
}
