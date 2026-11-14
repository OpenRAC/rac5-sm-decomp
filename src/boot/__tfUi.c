/* __tfUi -- GCC 2.9 RTTI accessor: builds the builtin type_info for "Ui" once and returns it. */
typedef struct {
    const char *name;
    void *vtable;
} ti_t;

extern ti_t __tiUi;
extern char builtin_vt[] __asm__("_vt$19__builtin_type_info");

void *__tfUi(void) {
    ti_t *p;

    if (__tiUi.name == 0) {
        p = &__tiUi;
        if (p) {
            p->name = "Ui";
            p->vtable = builtin_vt;
        }
    }
    return &__tiUi;
}
