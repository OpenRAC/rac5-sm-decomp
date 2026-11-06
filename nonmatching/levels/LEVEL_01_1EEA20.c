/* LEVEL_01.REL:0x1EEA20, bounded 52-byte retail body.
 * Pinned C links 48 bytes; first difference at body byte +8.
 * The pinned compiler folds the pointer-null guard retained by retail and reorders two data-pointer assignments. An inline C helper still links 48 bytes; five other qualified compiler routes also miss. Reopen with the original lazy-initializer source pattern or a narrowly qualified compiler remedy.
 */
extern void *D_0020A7F0;
extern char D_0022B608[];
extern char D_0022B540[];

static __inline__ void assign(void **record)
{
    if (record != 0) {
        record[1] = D_0022B608;
        record[0] = D_0022B540;
    }
}

void **func_1EEA20(void)
{
    void **record = &D_0020A7F0;
    if (*record == 0)
        assign(record);
    return record;
}