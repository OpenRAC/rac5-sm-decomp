/* LEVEL_01:0x1EC9F0 -- calls the object's second virtual method and returns the first word of the result. */
typedef struct Obj Obj;

typedef struct Vt {
    void *fn0;
    int *(*fn1)(Obj *);
} Vt;

struct Obj {
    Vt *vt;
};

int what__C9exception(Obj *o)
{
    return *o->vt->fn1(o);
}
