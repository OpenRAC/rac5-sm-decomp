struct Obj {
    char pad00[16];
};

int func_123220(struct Obj *, struct Obj *);
int func_123150(struct Obj *, struct Obj *);

int func_123270(struct Obj *first, struct Obj *second)
{
    int pending;

    pending = func_123220(first, second);
    if (pending != 0)
        return func_123150(first, second);
    return 0;
}
