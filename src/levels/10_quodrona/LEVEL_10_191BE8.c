/* LEVEL_10:0x191BE8 -- resolves the record's target offset against the global base (clearing it when unnamed) and tells whether the resolved target carries the expected id. */
struct Target {
    char pad00[0x24];
    unsigned int id;
    char pad28[0x18];
};

struct Handle {
    char pad00[0x40];
    struct Target *target;
};

struct Rec {
    struct Handle *handle;
};

struct Obj {
    char pad00[0x54];
    struct Rec *rec;
};

extern int D_0020F9F4;

int func_191BE8(struct Obj *o)
{
    struct Rec *r = o->rec;
    char *t;
    int ok;

    if (*(int *)r == 0) {
        ok = 0;
    } else {
        t = (char *)(D_0020F9F4 + *(int *)r);
        if (*(int *)(t + 0x40) == 0) {
            *(int *)r = 0;
            ok = 0;
        } else {
            *(int *)r = (int)t;
            ok = 1;
        }
    }
    if (!ok)
        return 0;
    return r->handle->target->id == 0x7B40D552;
}
