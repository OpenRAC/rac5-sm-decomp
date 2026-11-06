/* LEVEL_03.REL:0x2070B0, bounded 52-byte retail body.
 * Pinned C links 48 bytes; first difference at body byte +8.
 * The pinned compiler folds the pointer-null guard retained by retail and reorders two data-pointer assignments. An inline C helper still links 48 bytes; five other qualified compiler routes also miss. Reopen with the original lazy-initializer source pattern or a narrowly qualified compiler remedy.
 */
extern void *D_002236C8;
extern char D_00246488[];
extern char D_002463C0[];

static __inline__ void assign(void **record)
{
    if (record != 0) {
        record[1] = D_00246488;
        record[0] = D_002463C0;
    }
}

void **func_2070B0(void)
{
    void **record = &D_002236C8;
    if (*record == 0)
        assign(record);
    return record;
}