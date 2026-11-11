struct Obj {
    char pad00[16];
};

int func_134AA8(struct Obj *, struct Obj *);
int func_1349D8(struct Obj *, struct Obj *);

int func_134AF8(struct Obj *first, struct Obj *second)
{
    int pending;

    pending = func_134AA8(first, second);
    if (pending != 0)
        return func_1349D8(first, second);
    return 0;
}
