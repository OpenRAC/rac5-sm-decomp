/* __tfc -- GCC 2.9 RTTI accessor: builds the builtin type_info for "c" once and returns it. */
typedef struct {
    const char *name;
    void *vtable;
} ti_t;

extern ti_t __tic;
extern char builtin_vt[] __asm__("_vt$19__builtin_type_info");

void *__tfc(void) {
    ti_t *p;

    if (__tic.name == 0) {
        p = &__tic;
        if (p) {
            p->name = "c";
            p->vtable = builtin_vt;
        }
    }
    return &__tic;
}
