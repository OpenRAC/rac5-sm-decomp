/* __tfd -- GCC 2.9 RTTI accessor: builds the builtin type_info for "d" once and returns it. */
typedef struct {
    const char *name;
    void *vtable;
} ti_t;

extern ti_t __tid;
extern char builtin_vt[] __asm__("_vt$19__builtin_type_info");

void *__tfd(void) {
    ti_t *p;

    if (__tid.name == 0) {
        p = &__tid;
        if (p) {
            p->name = "d";
            p->vtable = builtin_vt;
        }
    }
    return &__tid;
}
