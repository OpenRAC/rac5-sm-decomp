struct Obj {
    char pad00[16];
};

int func_0E1710(struct Obj *, struct Obj *);
int func_0E1640(struct Obj *, struct Obj *);

int func_0E1760(struct Obj *first, struct Obj *second)
{
    int pending;

    pending = func_0E1710(first, second);
    if (pending != 0)
        return func_0E1640(first, second);
    return 0;
}
