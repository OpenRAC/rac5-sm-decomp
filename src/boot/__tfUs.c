/* __tfUs -- GCC 2.9 RTTI accessor: builds the builtin type_info for "Us" once and returns it. */
typedef struct {
    const char *name;
    void *vtable;
} ti_t;

extern ti_t __tiUs;
extern char builtin_vt[] __asm__("_vt$19__builtin_type_info");

void *__tfUs(void) {
    ti_t *p;

    if (__tiUs.name == 0) {
        p = &__tiUs;
        if (p) {
            p->name = "Us";
            p->vtable = builtin_vt;
        }
    }
    return &__tiUs;
}
