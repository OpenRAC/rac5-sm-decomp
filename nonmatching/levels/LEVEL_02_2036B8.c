/* LEVEL_02.REL:0x2036B8, bounded 52-byte retail body.
 * Pinned C links 48 bytes; first difference at body byte +8.
 * The pinned compiler folds the pointer-null guard retained by retail and reorders two data-pointer assignments. An inline C helper still links 48 bytes; five other qualified compiler routes also miss. Reopen with the original lazy-initializer source pattern or a narrowly qualified compiler remedy.
 */
extern void *D_0021F740;
extern char D_00242B08[];
extern char D_00242A40[];

static __inline__ void assign(void **record)
{
    if (record != 0) {
        record[1] = D_00242B08;
        record[0] = D_00242A40;
    }
}

void **func_2036B8(void)
{
    void **record = &D_0021F740;
    if (*record == 0)
        assign(record);
    return record;
}