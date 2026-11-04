struct Obj {
    char pad00[16];
};

int func_12D420(struct Obj *, struct Obj *);
int func_12D350(struct Obj *, struct Obj *);

int func_12D470(struct Obj *first, struct Obj *second)
{
    int pending;

    pending = func_12D420(first, second);
    if (pending != 0)
        return func_12D350(first, second);
    return 0;
}
