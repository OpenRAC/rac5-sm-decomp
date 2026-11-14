/* __tfx -- GCC 2.9 RTTI accessor: builds the builtin type_info for "x" once and returns it. */
typedef struct {
    const char *name;
    void *vtable;
} ti_t;

extern ti_t __tix;
extern char builtin_vt[] __asm__("_vt$19__builtin_type_info");

void *__tfx(void) {
    ti_t *p;

    if (__tix.name == 0) {
        p = &__tix;
        if (p) {
            p->name = "x";
            p->vtable = builtin_vt;
        }
    }
    return &__tix;
}
