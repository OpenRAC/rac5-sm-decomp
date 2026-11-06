/* LEVEL_20.REL:0x0FCBF0, bounded 52-byte retail body.
 * Pinned C links 48 bytes; first difference at body byte +8.
 * The pinned compiler folds the pointer-null guard retained by retail and reorders two data-pointer assignments. An inline C helper still links 48 bytes; five other qualified compiler routes also miss. Reopen with the original lazy-initializer source pattern or a narrowly qualified compiler remedy.
 */
extern void *D_00120A48;
extern char D_00131C78[];
extern char D_00131BB0[];

static __inline__ void assign(void **record)
{
    if (record != 0) {
        record[1] = D_00131C78;
        record[0] = D_00131BB0;
    }
}

void **func_0FCBF0(void)
{
    void **record = &D_00120A48;
    if (*record == 0)
        assign(record);
    return record;
}