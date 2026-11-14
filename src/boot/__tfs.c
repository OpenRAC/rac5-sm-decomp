/* __tfs -- GCC 2.9 RTTI accessor: builds the builtin type_info for "s" once and returns it. */
typedef struct {
    const char *name;
    void *vtable;
} ti_t;

extern ti_t __tis;
extern char builtin_vt[] __asm__("_vt$19__builtin_type_info");

void *__tfs(void) {
    ti_t *p;

    if (__tis.name == 0) {
        p = &__tis;
        if (p) {
            p->name = "s";
            p->vtable = builtin_vt;
        }
    }
    return &__tis;
}
