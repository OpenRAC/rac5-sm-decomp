extern int D_001DDDAC[];

struct Object {
    char pad[0x1C6C];
    int f1C6C;
    int f1C70;
};

int func_026C48(void)
{
    struct Object *object = (struct Object *)D_001DDDAC[0];
    int count = object->f1C70;

    if (count > 0)
        return count;
    return object->f1C6C;
}
