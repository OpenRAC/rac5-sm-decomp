/* LEVEL_09:0x1D6470 -- placement copy of FRONTEND_025390.c: pops a caught exception: drops one handler reference and, when none is left and it is not being rethrown, unlinks it from the caught list (terminating when missing), runs its cleanup and frees it. */
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

extern EhInfo **func_1D53C8(void);
extern void func_1D6248(void) __attribute__((noreturn));
extern int func_1D86C0(void *type);
extern void func_1D6350(void *block);

void __cp_pop_exception(EhInfo *p)
{
    EhInfo **q = func_1D53C8();

    --p->handlers;
    if (p->handlers != 0 || (p == *q && !p->caught))
        return;

    for (; *q; q = &(*q)->next)
        if (*q == p)
            break;

    if (!*q)
        func_1D6248();

    *q = p->next;

    if (p->cleanup)
        (*p->cleanup)(p->value, 2);

    if (!func_1D86C0(p->type))
        func_1D6350(p->original_value);

    func_1D6350(p);
}
