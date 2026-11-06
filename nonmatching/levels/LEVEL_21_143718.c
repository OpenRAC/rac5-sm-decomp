/* LEVEL_21.REL:0x143718, bounded 52-byte retail body.
 * Pinned C links 48 bytes; first difference at body byte +8.
 * The pinned compiler folds the pointer-null guard retained by retail and reorders two data-pointer assignments. An inline C helper still links 48 bytes; five other qualified compiler routes also miss. Reopen with the original lazy-initializer source pattern or a narrowly qualified compiler remedy.
 */
extern void *D_0015F1E0;
extern char D_00173738[];
extern char D_00173670[];

static __inline__ void assign(void **record)
{
    if (record != 0) {
        record[1] = D_00173738;
        record[0] = D_00173670;
    }
}

void **func_143718(void)
{
    void **record = &D_0015F1E0;
    if (*record == 0)
        assign(record);
    return record;
}