/* __tff -- GCC 2.9 RTTI accessor: builds the builtin type_info for "f" once and returns it. */
typedef struct {
    const char *name;
    void *vtable;
} ti_t;

extern ti_t __tif;
extern char builtin_vt[] __asm__("_vt$19__builtin_type_info");

void *__tff(void) {
    ti_t *p;

    if (__tif.name == 0) {
        p = &__tif;
        if (p) {
            p->name = "f";
            p->vtable = builtin_vt;
        }
    }
    return &__tif;
}
