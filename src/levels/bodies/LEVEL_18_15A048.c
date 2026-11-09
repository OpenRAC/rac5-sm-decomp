/* LEVEL_18:0x15A048 -- compares a record word with a byte field, checks two sub-record fields, then returns a predicate helper result as 0 or 1. */
extern int func_159C10(char *a0);

int func_15A048(char *a0, char *a1)
{
    char *p;
    char *q;

    p = *(char **)(a0 + 0x54);
    q = *(char **)(a0 + 0x58);
    if (*(int *)(a1 + 0xFC) != *(unsigned char *)(p + 0x18)
        || *(unsigned char *)(q + 0x18A) == 0
        || *(int *)q != 0
        || !func_159C10(a0)) {
        return 0;
    }
    return 1;
}
