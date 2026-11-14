/* __tfUl -- GCC 2.9 RTTI accessor: builds the builtin type_info for "Ul" once and returns it. */
typedef struct {
    const char *name;
    void *vtable;
} ti_t;

extern ti_t __tiUl;
extern char builtin_vt[] __asm__("_vt$19__builtin_type_info");

void *__tfUl(void) {
    ti_t *p;

    if (__tiUl.name == 0) {
        p = &__tiUl;
        if (p) {
            p->name = "Ul";
            p->vtable = builtin_vt;
        }
    }
    return &__tiUl;
}
