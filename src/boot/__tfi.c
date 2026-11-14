/* __tfi -- GCC 2.9 RTTI accessor: builds the builtin type_info for "i" once and returns it. */
typedef struct {
    const char *name;
    void *vtable;
} ti_t;

extern ti_t __tii;
extern char builtin_vt[] __asm__("_vt$19__builtin_type_info");

void *__tfi(void) {
    ti_t *p;

    if (__tii.name == 0) {
        p = &__tii;
        if (p) {
            p->name = "i";
            p->vtable = builtin_vt;
        }
    }
    return &__tii;
}
