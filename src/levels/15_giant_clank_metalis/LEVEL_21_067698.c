/* LEVEL_21:0x067698 -- placement copy of LEVEL_01_082460.c: once per object, calls the registered callback for objects of kind 1 that have a child and marks them. */
typedef void (*Callback)(void *o);

typedef struct {
    char pad00[0x3F];
    unsigned char kind;
} Type;

typedef struct {
    char pad00[0x40];
    Type *type;
    char pad44[0x18];
    void *child;
    char pad60[4];
    unsigned int flags;
} Obj;

extern Callback D_0014ADD8;

void func_067698(Obj *o)
{
    Callback cb;

    if (o->type->kind == 1) {
        cb = D_0014ADD8;
        if (cb != 0 && (o->flags & 0x20000) == 0 && o->child != 0) {
            cb(o);
            o->flags = o->flags | 0x20000;
        }
    }
}
