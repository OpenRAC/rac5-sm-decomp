/* LEVEL_10.REL:0x1F7A78, bounded 52-byte retail body.
 * Pinned C links 48 bytes; first difference at body byte +8.
 * The pinned compiler folds the pointer-null guard retained by retail and reorders two data-pointer assignments. An inline C helper still links 48 bytes; five other qualified compiler routes also miss. Reopen with the original lazy-initializer source pattern or a narrowly qualified compiler remedy.
 */
extern void *D_00213778;
extern char D_002349C8[];
extern char D_00234900[];

static __inline__ void assign(void **record)
{
    if (record != 0) {
        record[1] = D_002349C8;
        record[0] = D_00234900;
    }
}

void **func_1F7A78(void)
{
    void **record = &D_00213778;
    if (*record == 0)
        assign(record);
    return record;
}