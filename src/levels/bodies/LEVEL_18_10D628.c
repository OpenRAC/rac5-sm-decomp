struct Obj {
    char pad00[16];
};

int func_10D5D8(struct Obj *, struct Obj *);
int func_10D508(struct Obj *, struct Obj *);

int func_10D628(struct Obj *first, struct Obj *second)
{
    int pending;

    pending = func_10D5D8(first, second);
    if (pending != 0)
        return func_10D508(first, second);
    return 0;
}
