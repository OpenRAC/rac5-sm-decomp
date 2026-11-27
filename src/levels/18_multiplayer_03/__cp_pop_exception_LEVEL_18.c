/* LEVEL_18:0x199548 -- placement copy of FRONTEND_025390.c: pops a caught exception: drops one handler reference and, when none is left and it is not being rethrown, unlinks it from the caught list (terminating when missing), runs its cleanup and frees it. */
typedef struct EhInfo EhInfo;

struct EhInfo {
    void *match_function;
    short language;
    short version;
    void *value;
    void *type;
    void (*cleanup)(void *, int);
    int caught;
    EhInfo *next;
    long long handlers;
    void *original_value;
};

extern EhInfo **func_1984A0(void);
extern void func_199320(void) __attribute__((noreturn));
extern int func_19B798(void *type);
extern void func_199428(void *block);

void __cp_pop_exception(EhInfo *p)
{
    EhInfo **q = func_1984A0();

    --p->handlers;
    if (p->handlers != 0 || (p == *q && !p->caught))
        return;

    for (; *q; q = &(*q)->next)
        if (*q == p)
            break;

    if (!*q)
        func_199320();

    *q = p->next;

    if (p->cleanup)
        (*p->cleanup)(p->value, 2);

    if (!func_19B798(p->type))
        func_199428(p->original_value);

    func_199428(p);
}
