/* __tfSc -- GCC 2.9 RTTI accessor: builds the builtin type_info for "Sc" once and returns it. */
typedef struct {
    const char *name;
    void *vtable;
} ti_t;

extern ti_t __tiSc;
extern char builtin_vt[] __asm__("_vt$19__builtin_type_info");

void *__tfSc(void) {
    ti_t *p;

    if (__tiSc.name == 0) {
        p = &__tiSc;
        if (p) {
            p->name = "Sc";
            p->vtable = builtin_vt;
        }
    }
    return &__tiSc;
}
