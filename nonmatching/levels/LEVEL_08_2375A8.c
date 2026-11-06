/* LEVEL_08.REL:0x2375A8, bounded 52-byte retail body.
 * Pinned C links 48 bytes; first difference at body byte +8.
 * The pinned compiler folds the pointer-null guard retained by retail and reorders two data-pointer assignments. An inline C helper still links 48 bytes; five other qualified compiler routes also miss. Reopen with the original lazy-initializer source pattern or a narrowly qualified compiler remedy.
 */
extern void *D_00254338;
extern char D_0027A888[];
extern char D_0027A7C0[];

static __inline__ void assign(void **record)
{
    if (record != 0) {
        record[1] = D_0027A888;
        record[0] = D_0027A7C0;
    }
}

void **func_2375A8(void)
{
    void **record = &D_00254338;
    if (*record == 0)
        assign(record);
    return record;
}