/* LEVEL_05.REL:0x1DDE18, bounded 52-byte retail body.
 * Pinned C links 48 bytes; first difference at body byte +8.
 * The pinned compiler folds the pointer-null guard retained by retail and reorders two data-pointer assignments. An inline C helper still links 48 bytes; five other qualified compiler routes also miss. Reopen with the original lazy-initializer source pattern or a narrowly qualified compiler remedy.
 */
extern void *D_001F9768;
extern char D_00217308[];
extern char D_00217240[];

static __inline__ void assign(void **record)
{
    if (record != 0) {
        record[1] = D_00217308;
        record[0] = D_00217240;
    }
}

void **func_1DDE18(void)
{
    void **record = &D_001F9768;
    if (*record == 0)
        assign(record);
    return record;
}