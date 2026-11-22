/* FRONTEND:0x024268 -- allocates and clears a new 24-byte record for exception handling. Ported from rac2-decomp src/core/00120390.c (eh_alloc_context). */
extern void *malloc(unsigned int);
extern void *memset(unsigned char *, int, int);
extern void func_024208(void);

char *func_024268(void) {
    char *record = malloc(24);
    if (record == 0) func_024208();
    memset((unsigned char *)record, 0, 24);
    *(char **)(record + 4) = record + 16;
    return record;
}
