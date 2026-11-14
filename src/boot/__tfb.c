/* __tfb -- GCC 2.9 RTTI accessor: builds the builtin type_info for "b" once and returns it. */
typedef struct {
    const char *name;
    void *vtable;
} ti_t;

extern ti_t __tib;
extern char builtin_vt[] __asm__("_vt$19__builtin_type_info");

void *__tfb(void) {
    ti_t *p;

    if (__tib.name == 0) {
        p = &__tib;
        if (p) {
            p->name = "b";
            p->vtable = builtin_vt;
        }
    }
    return &__tib;
}
