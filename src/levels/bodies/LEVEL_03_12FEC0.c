struct Obj {
    char pad00[16];
};

int func_12FE70(struct Obj *, struct Obj *);
int func_12FDA0(struct Obj *, struct Obj *);

int func_12FEC0(struct Obj *first, struct Obj *second)
{
    int pending;

    pending = func_12FE70(first, second);
    if (pending != 0)
        return func_12FDA0(first, second);
    return 0;
}
