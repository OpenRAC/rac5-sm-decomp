struct Obj {
    char pad00[16];
};

int func_12AA40(struct Obj *, struct Obj *);
int func_12A970(struct Obj *, struct Obj *);

int func_12AA90(struct Obj *first, struct Obj *second)
{
    int pending;

    pending = func_12AA40(first, second);
    if (pending != 0)
        return func_12A970(first, second);
    return 0;
}
