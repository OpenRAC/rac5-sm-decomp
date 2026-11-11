struct Obj {
    char pad00[16];
};

int func_1275A8(struct Obj *, struct Obj *);
int func_1274D8(struct Obj *, struct Obj *);

int func_1275F8(struct Obj *first, struct Obj *second)
{
    int pending;

    pending = func_1275A8(first, second);
    if (pending != 0)
        return func_1274D8(first, second);
    return 0;
}
