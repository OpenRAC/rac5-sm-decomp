/* dcast__C14__si_type_infoRC9type_infoiPvPC9type_infoT3 -- single-inheritance dynamic cast step: the object itself when the types match, else the base's own dcast on the adjusted pointer. */
typedef struct {
    char pad0[0x10];
    short delta;
    char pad12[2];
    void *(*dcast)(void *self, void *desired, int require_public, void *objptr, void *sub, void *subptr);
} tVtbl;

typedef struct tTypeInfo {
    const char *name;
    tVtbl *vtable;
    struct tTypeInfo *base;
} tTypeInfo;

extern int __eq__C9type_infoRC9type_info(const tTypeInfo *a, const tTypeInfo *b);

void *dcast__C14__si_type_infoRC9type_infoiPvPC9type_infoT3(const tTypeInfo *self, const tTypeInfo *desired,
                                                            int require_public, void *objptr,
                                                            const tTypeInfo *sub, void *subptr) {
    tTypeInfo *base;
    tVtbl *vt;

    if (__eq__C9type_infoRC9type_info(self, desired)) {
        return objptr;
    }
    base = self->base;
    vt = base->vtable;
    return vt->dcast((char *)base + vt->delta, (void *)desired, require_public, objptr, (void *)sub, subptr);
}
