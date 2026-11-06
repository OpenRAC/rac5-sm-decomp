/* LEVEL_16.REL:0x19A4C0, bounded 52-byte retail body.
 * Pinned C links 48 bytes; first difference at body byte +8.
 * The pinned compiler folds the pointer-null guard retained by retail and reorders two data-pointer assignments. An inline C helper still links 48 bytes; five other qualified compiler routes also miss. Reopen with the original lazy-initializer source pattern or a narrowly qualified compiler remedy.
 */
extern void *D_001BF838;
extern char D_001DA2F8[];
extern char D_001DA230[];

static __inline__ void assign(void **record)
{
    if (record != 0) {
        record[1] = D_001DA2F8;
        record[0] = D_001DA230;
    }
}

void **func_19A4C0(void)
{
    void **record = &D_001BF838;
    if (*record == 0)
        assign(record);
    return record;
}