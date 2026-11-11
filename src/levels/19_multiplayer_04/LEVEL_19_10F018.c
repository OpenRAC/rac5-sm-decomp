struct Obj {
    char pad00[16];
};

int func_10EFC8(struct Obj *, struct Obj *);
int func_10EEF8(struct Obj *, struct Obj *);

int func_10F018(struct Obj *first, struct Obj *second)
{
    int pending;

    pending = func_10EFC8(first, second);
    if (pending != 0)
        return func_10EEF8(first, second);
    return 0;
}
