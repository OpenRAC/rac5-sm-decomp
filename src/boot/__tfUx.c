/* __tfUx -- GCC 2.9 RTTI accessor: builds the builtin type_info for "Ux" once and returns it. */
typedef struct {
    const char *name;
    void *vtable;
} ti_t;

extern ti_t __tiUx;
extern char builtin_vt[] __asm__("_vt$19__builtin_type_info");

void *__tfUx(void) {
    ti_t *p;

    if (__tiUx.name == 0) {
        p = &__tiUx;
        if (p) {
            p->name = "Ux";
            p->vtable = builtin_vt;
        }
    }
    return &__tiUx;
}
