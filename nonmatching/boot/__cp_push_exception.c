/* __cp_push_exception 0x01E98190 (14 November 2026).
 * Measured sdk991111: 2 differing words; first difference at +0x6C.
 * Recover the observed types, statement order and lifetimes before retrying.
 * No matching credit.
 */
typedef struct cp_eh_info {
    void *match_function;
    short language;
    short version;
    void *value;
    void *type;
    void *cleanup;
    int handlers;
    struct cp_eh_info *next;
    int pad1C;
    long count;
    void *original_value;
} cp_eh_info;

extern void *__eh_alloc(unsigned int size);
extern cp_eh_info **__get_eh_info(void);
extern int __cplus_type_matcher(void);

void __cp_push_exception(void *value, void *type, void *cleanup) {
    cp_eh_info *p;
    cp_eh_info **q;

    p = (cp_eh_info *)__eh_alloc(sizeof(cp_eh_info));
    p->match_function = (void *)__cplus_type_matcher;
    p->language = 4;
    p->version = 1;
    p->value = value;
    p->type = type;
    p->cleanup = cleanup;
    p->count = 0;
    p->handlers = 0;
    p->original_value = value;
    q = __get_eh_info();
    p->next = *q;
    *q = p;
}
