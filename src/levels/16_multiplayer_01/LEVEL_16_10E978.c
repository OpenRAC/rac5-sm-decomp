struct Obj {
    char pad00[16];
};

int func_10E928(struct Obj *, struct Obj *);
int func_10E858(struct Obj *, struct Obj *);

int func_10E978(struct Obj *first, struct Obj *second)
{
    int pending;

    pending = func_10E928(first, second);
    if (pending != 0)
        return func_10E858(first, second);
    return 0;
}
