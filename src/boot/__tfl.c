/* __tfl -- GCC 2.9 RTTI accessor: builds the builtin type_info for "l" once and returns it. */
typedef struct {
    const char *name;
    void *vtable;
} ti_t;

extern ti_t __til;
extern char builtin_vt[] __asm__("_vt$19__builtin_type_info");

void *__tfl(void) {
    ti_t *p;

    if (__til.name == 0) {
        p = &__til;
        if (p) {
            p->name = "l";
            p->vtable = builtin_vt;
        }
    }
    return &__til;
}
