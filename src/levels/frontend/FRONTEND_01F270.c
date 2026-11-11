/* FRONTEND:0x01F270 -- checks the flags of the global object. */
struct obj {
    int pad;
    int flags;
};

int func_01F150(struct obj *);

int func_01F270(int *p)
{
    struct obj *q = p[0];
    int flags;

    if (func_01F150(q) == 0)
        return 0;
    flags = q->flags;
    if (flags & 2) {
        if (flags & 4)
            return 1;
    }
    return 0;
}
