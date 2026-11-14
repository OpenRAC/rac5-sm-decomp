/* __is_pointer__FPv -- whether the dynamic type of an object is a pointer type. */
typedef struct {
    short delta;
    short index;
    void *(*fn)(void);
} tEntry;

typedef struct {
    tEntry type;
} tVtbl;

typedef struct {
    tVtbl *vtable;
} tObj;

extern void *__dynamic_cast(void *(*getobj)(void), void *(*getdesired)(void), int require_public,
                            void *objptr, void *(*getsub)(void), void *subptr);
extern void *__tf19__pointer_type_info(void);
extern void *__tf9type_info(void);

int __is_pointer__FPv(void *p) {
    tEntry *e;
    void *r = 0;

    if (p) {
        e = &((tObj *)((char *)p + 4))->vtable->type;
        r = __dynamic_cast(e->fn, __tf19__pointer_type_info, 1, (char *)p + e->delta, __tf9type_info, p);
    }
    return r != 0;
}
