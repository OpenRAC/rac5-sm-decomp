/* LEVEL_16:0x160F10 -- reports whether the nested record's handle is set and accepted by the check. */
typedef struct Inner {
    char pad00[0xA4];
    char *handle;
} Inner;

typedef struct Obj {
    char pad00[0x58];
    Inner *inner;
} Obj;

extern int func_160E40(char *a0, char *a1);

long long func_160F10(Obj *o)
{
    long long r;
    int t;

    r = 0;
    if (o->inner->handle != 0) {
        t = func_160E40((char *)o, o->inner->handle) != 0;
        r = t;
    }
    return r;
}
