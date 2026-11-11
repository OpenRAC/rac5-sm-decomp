struct Obj {
    char pad00[16];
};

int func_10DEA0(struct Obj *, struct Obj *);
int func_10DDD0(struct Obj *, struct Obj *);

int func_10DEF0(struct Obj *first, struct Obj *second)
{
    int pending;

    pending = func_10DEA0(first, second);
    if (pending != 0)
        return func_10DDD0(first, second);
    return 0;
}
