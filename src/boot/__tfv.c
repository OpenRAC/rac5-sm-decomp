/* __tfv -- GCC 2.9 RTTI accessor: builds the builtin type_info for "v" once and returns it. */
typedef struct {
    const char *name;
    void *vtable;
} ti_t;

extern ti_t __tiv;
extern char builtin_vt[] __asm__("_vt$19__builtin_type_info");

void *__tfv(void) {
    ti_t *p;

    if (__tiv.name == 0) {
        p = &__tiv;
        if (p) {
            p->name = "v";
            p->vtable = builtin_vt;
        }
    }
    return &__tiv;
}
