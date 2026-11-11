extern int D_001F3FAC[];

struct Object {
    char pad[0x1C6C];
    int f1C6C;
    int f1C70;
};

int func_027C40(void)
{
    struct Object *object = (struct Object *)D_001F3FAC[0];
    int count = object->f1C70;

    if (count > 0)
        return count;
    return object->f1C6C;
}
