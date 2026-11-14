/* __dynamic_cast -- runs the type accessors, then the object's dcast slot on the adjusted pointer. */
typedef struct {
    short delta;
    short index;
    void *(*fn)(void *self, void *desired, int require_public, void *objptr, void *sub, void *subptr);
} tEntry;

typedef struct {
    char pad0[0x10];
    tEntry dcast;
} tVtbl;

typedef struct {
    const char *name;
    tVtbl *vtable;
} tTypeInfo;

void *__dynamic_cast(tTypeInfo *(*getobj)(void), void *(*getdesired)(void), int require_public, void *objptr,
                     void *(*getsub)(void), void *subptr) {
    tTypeInfo *self;
    tEntry *e;
    void *obj;
    void *desired;
    void *sub;

    self = getobj();
    e = &self->vtable->dcast;
    obj = (char *)self + e->delta;
    desired = getdesired();
    sub = getsub();
    return e->fn(obj, desired, require_public, objptr, sub, subptr);
}
