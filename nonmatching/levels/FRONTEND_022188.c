/* FRONTEND.REL:0x022188: Ghidra body 80 bytes.
 * Pinned pure C links 68 bytes and first differs at +12.
 * Recheck the global pointer reload and its evidenced qualifier. No matching credit.
 */
extern void *memset(void *, int, unsigned int);
extern int *D_0003285C;

int func_022188(int *record)
{
    if (record != 0) {
        memset(record, 0, 0x18);
        D_0003285C = record;
        D_0003285C[1] = 0;
        D_0003285C[0] = 0;
    }
    return record != 0;
}
