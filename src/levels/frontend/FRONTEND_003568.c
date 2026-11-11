/* FRONTEND:0x003568 -- reads the counter of the global object. */
extern int D_00027E9C[];

struct Object {
    char pad[0x1C6C];
    int f1C6C;
    int f1C70;
};

int func_003568(void)
{
    struct Object *object = (struct Object *)D_00027E9C[0];
    int count = object->f1C70;

    if (count > 0)
        return count;
    return object->f1C6C;
}
