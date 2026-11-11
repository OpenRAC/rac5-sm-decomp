extern int D_0020C62C[];

struct Object {
    char pad[0x1C6C];
    int f1C6C;
    int f1C70;
};

int func_027B20(void)
{
    struct Object *object = (struct Object *)D_0020C62C[0];
    int count = object->f1C70;

    if (count > 0)
        return count;
    return object->f1C6C;
}
