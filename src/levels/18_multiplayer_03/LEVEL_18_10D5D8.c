struct obj {
    int pad;
    int flags;
};

int func_10D4B8(struct obj *);

int func_10D5D8(int *p)
{
    struct obj *q = p[0];
    int flags;

    if (func_10D4B8(q) == 0)
        return 0;
    flags = q->flags;
    if (flags & 2) {
        if (flags & 4)
            return 1;
    }
    return 0;
}
