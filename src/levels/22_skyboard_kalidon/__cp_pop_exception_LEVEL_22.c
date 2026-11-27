/* LEVEL_22:0x14B9C0 -- placement copy of FRONTEND_025390.c: pops a caught exception: drops one handler reference and, when none is left and it is not being rethrown, unlinks it from the caught list (terminating when missing), runs its cleanup and frees it. */
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

extern EhInfo **func_14A918(void);
extern void func_14B798(void) __attribute__((noreturn));
extern int func_14DC10(void *type);
extern void func_14B8A0(void *block);

void __cp_pop_exception(EhInfo *p)
{
    EhInfo **q = func_14A918();

    --p->handlers;
    if (p->handlers != 0 || (p == *q && !p->caught))
        return;

    for (; *q; q = &(*q)->next)
        if (*q == p)
            break;

    if (!*q)
        func_14B798();

    *q = p->next;

    if (p->cleanup)
        (*p->cleanup)(p->value, 2);

    if (!func_14DC10(p->type))
        func_14B8A0(p->original_value);

    func_14B8A0(p);
}
