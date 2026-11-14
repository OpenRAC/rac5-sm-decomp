/* __cp_pop_exception 0x01E98220 (14 November 2026).
 * Measured sdk991111: 0 differing words; first difference at -.
 * Recover the observed types, statement order and lifetimes before retrying.
 * No matching credit.
 */
typedef struct cp_eh_info {
    void *match_function;
    short language;
    short version;
    void *value;
    void *type;
    void (*cleanup)(void *, int);
    int caught;
    struct cp_eh_info *next;
    int pad1C;
    long handlers;
    void *original_value;
} cp_eh_info;

extern cp_eh_info **__get_eh_info(void);
extern int __is_pointer__FPv(void *p);
extern void __eh_free(void *p);
extern void terminate__Fv(void) __attribute__((noreturn));

void __cp_pop_exception(cp_eh_info *p) {
    cp_eh_info **q = __get_eh_info();

    p->handlers--;
    if (p->handlers != 0) {
        return;
    }
    if (p == *q && p->caught == 0) {
        return;
    }
    for (; *q != 0 && *q != p; q = &(*q)->next) {
    }
    if (*q == 0) {
        terminate__Fv();
    }
    *q = p->next;
    if (p->cleanup != 0) {
        p->cleanup(p->value, 2);
    }
    if (!__is_pointer__FPv(p->type)) {
        __eh_free(p->original_value);
    }
    __eh_free(p);
}
