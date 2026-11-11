struct Obj {
    char pad00[16];
};

int func_0F0970(struct Obj *, struct Obj *);
int func_0F08A0(struct Obj *, struct Obj *);

int func_0F09C0(struct Obj *first, struct Obj *second)
{
    int pending;

    pending = func_0F0970(first, second);
    if (pending != 0)
        return func_0F08A0(first, second);
    return 0;
}
