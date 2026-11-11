struct Obj {
    char pad00[16];
};

int func_128178(struct Obj *, struct Obj *);
int func_1280A8(struct Obj *, struct Obj *);

int func_1281C8(struct Obj *first, struct Obj *second)
{
    int pending;

    pending = func_128178(first, second);
    if (pending != 0)
        return func_1280A8(first, second);
    return 0;
}
