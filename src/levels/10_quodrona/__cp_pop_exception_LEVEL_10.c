/* LEVEL_10:0x1F5660 -- placement copy of FRONTEND_025390.c: pops a caught exception: drops one handler reference and, when none is left and it is not being rethrown, unlinks it from the caught list (terminating when missing), runs its cleanup and frees it. */
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

extern EhInfo **func_1F45B8(void);
extern void func_1F5438(void) __attribute__((noreturn));
extern int func_1F78B0(void *type);
extern void func_1F5540(void *block);

void __cp_pop_exception(EhInfo *p)
{
    EhInfo **q = func_1F45B8();

    --p->handlers;
    if (p->handlers != 0 || (p == *q && !p->caught))
        return;

    for (; *q; q = &(*q)->next)
        if (*q == p)
            break;

    if (!*q)
        func_1F5438();

    *q = p->next;

    if (p->cleanup)
        (*p->cleanup)(p->value, 2);

    if (!func_1F78B0(p->type))
        func_1F5540(p->original_value);

    func_1F5540(p);
}
