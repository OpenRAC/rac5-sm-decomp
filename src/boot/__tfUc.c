/* __tfUc -- GCC 2.9 RTTI accessor: builds the builtin type_info for "Uc" once and returns it. */
typedef struct {
    const char *name;
    void *vtable;
} ti_t;

extern ti_t __tiUc;
extern char builtin_vt[] __asm__("_vt$19__builtin_type_info");

void *__tfUc(void) {
    ti_t *p;

    if (__tiUc.name == 0) {
        p = &__tiUc;
        if (p) {
            p->name = "Uc";
            p->vtable = builtin_vt;
        }
    }
    return &__tiUc;
}
