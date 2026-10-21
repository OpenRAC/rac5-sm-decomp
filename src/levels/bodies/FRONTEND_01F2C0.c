/* FRONTEND:0x01F2C0 -- applies the pending update when one is queued. */
struct Obj {
    char pad00[16];
};

int func_01F270(struct Obj *, struct Obj *);
int func_01F1A0(struct Obj *, struct Obj *);

int func_01F2C0(struct Obj *first, struct Obj *second)
{
    int pending;

    pending = func_01F270(first, second);
    if (pending != 0)
        return func_01F1A0(first, second);
    return 0;
}
