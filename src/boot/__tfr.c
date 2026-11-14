/* __tfr -- GCC 2.9 RTTI accessor: builds the builtin type_info for "r" once and returns it. */
typedef struct {
    const char *name;
    void *vtable;
} ti_t;

extern ti_t __tir;
extern char builtin_vt[] __asm__("_vt$19__builtin_type_info");

void *__tfr(void) {
    ti_t *p;

    if (__tir.name == 0) {
        p = &__tir;
        if (p) {
            p->name = "r";
            p->vtable = builtin_vt;
        }
    }
    return &__tir;
}
