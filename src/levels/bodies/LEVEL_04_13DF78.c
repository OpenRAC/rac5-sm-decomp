struct Obj {
    char pad00[16];
};

int func_13DF28(struct Obj *, struct Obj *);
int func_13DE58(struct Obj *, struct Obj *);

int func_13DF78(struct Obj *first, struct Obj *second)
{
    int pending;

    pending = func_13DF28(first, second);
    if (pending != 0)
        return func_13DE58(first, second);
    return 0;
}
