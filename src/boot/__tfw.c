/* __tfw -- GCC 2.9 RTTI accessor: builds the builtin type_info for "w" once and returns it. */
typedef struct {
    const char *name;
    void *vtable;
} ti_t;

extern ti_t __tiw;
extern char builtin_vt[] __asm__("_vt$19__builtin_type_info");

void *__tfw(void) {
    ti_t *p;

    if (__tiw.name == 0) {
        p = &__tiw;
        if (p) {
            p->name = "w";
            p->vtable = builtin_vt;
        }
    }
    return &__tiw;
}
