/* LEVEL_21:0x141300 -- placement copy of FRONTEND_025390.c: pops a caught exception: drops one handler reference and, when none is left and it is not being rethrown, unlinks it from the caught list (terminating when missing), runs its cleanup and frees it. */
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

extern EhInfo **func_140258(void);
extern void func_1410D8(void) __attribute__((noreturn));
extern int func_143550(void *type);
extern void func_1411E0(void *block);

void __cp_pop_exception(EhInfo *p)
{
    EhInfo **q = func_140258();

    --p->handlers;
    if (p->handlers != 0 || (p == *q && !p->caught))
        return;

    for (; *q; q = &(*q)->next)
        if (*q == p)
            break;

    if (!*q)
        func_1410D8();

    *q = p->next;

    if (p->cleanup)
        (*p->cleanup)(p->value, 2);

    if (!func_143550(p->type))
        func_1411E0(p->original_value);

    func_1411E0(p);
}
