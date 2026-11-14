/* LEVEL_08:0x1ACE88 -- resolves the three references of the object's record (+0x54) against the global table in turn (each is cleared when its entry is dead); returns 1 only when all three resolve. */
extern char *D_0024FC54;

static __inline__ int Resolve(int *slot)
{
    char *entry;

    if (*slot == 0) {
        return 0;
    }
    entry = D_0024FC54 + *slot;
    if (*(int *)(entry + 0x40) == 0) {
        *slot = 0;
        return 0;
    }
    *slot = (int)entry;
    return 1;
}

int func_1ACE88(char *object)
{
    int *rec;

    rec = *(int **)(object + 0x54);
    if (!Resolve(&rec[0])) {
        return 0;
    }
    if (!Resolve(&rec[1])) {
        return 0;
    }
    return Resolve(&rec[2]);
}
