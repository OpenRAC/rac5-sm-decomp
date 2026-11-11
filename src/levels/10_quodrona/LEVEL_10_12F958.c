struct Obj {
    char pad00[16];
};

int func_12F908(struct Obj *, struct Obj *);
int func_12F838(struct Obj *, struct Obj *);

int func_12F958(struct Obj *first, struct Obj *second)
{
    int pending;

    pending = func_12F908(first, second);
    if (pending != 0)
        return func_12F838(first, second);
    return 0;
}
