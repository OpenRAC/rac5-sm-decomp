/* LEVEL_03:0x1AE218 -- relocates the record's table offset, resolves its handle, copies the two optional floats into the handle and clears the pending word; returns 1 when the handle resolved. */
extern int D_0021F414;

struct Handle {
    char pad00[0x18];
    float f18;
    float f1C;
};

struct Rec {
    int key;
    int table;
    struct Handle *handle;
    int pending;
    float f10;
    float f14;
};

struct Obj {
    char pad00[0x54];
    struct Rec *rec;
};

extern struct Handle *func_1282D0(int key);

int func_1AE218(struct Obj *o)
{
    struct Rec *r = o->rec;

    if (r->table != 0) {
        r->table = D_0021F414 + r->table;
    }
    r->handle = func_1282D0(r->key);
    if (r->handle == 0) {
        return 0;
    }
    if (r->f10 != 0.0f) {
        r->handle->f18 = r->f10;
    }
    if (r->f14 != 0.0f) {
        r->handle->f1C = r->f14;
    }
    r->pending = 0;
    return 1;
}
