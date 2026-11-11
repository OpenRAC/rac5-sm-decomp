struct Obj {
    char pad00[16];
};

int func_137E58(struct Obj *, struct Obj *);
int func_137D88(struct Obj *, struct Obj *);

int func_137EA8(struct Obj *first, struct Obj *second)
{
    int pending;

    pending = func_137E58(first, second);
    if (pending != 0)
        return func_137D88(first, second);
    return 0;
}
