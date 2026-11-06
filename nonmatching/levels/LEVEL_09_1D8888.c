/* LEVEL_09.REL:0x1D8888, bounded 52-byte retail body.
 * Pinned C links 48 bytes; first difference at body byte +8.
 * The pinned compiler folds the pointer-null guard retained by retail and reorders two data-pointer assignments. An inline C helper still links 48 bytes; five other qualified compiler routes also miss. Reopen with the original lazy-initializer source pattern or a narrowly qualified compiler remedy.
 */
extern void *D_001F4470;
extern char D_00212D78[];
extern char D_00212CB0[];

static __inline__ void assign(void **record)
{
    if (record != 0) {
        record[1] = D_00212D78;
        record[0] = D_00212CB0;
    }
}

void **func_1D8888(void)
{
    void **record = &D_001F4470;
    if (*record == 0)
        assign(record);
    return record;
}