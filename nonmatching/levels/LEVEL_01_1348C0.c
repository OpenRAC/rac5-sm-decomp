/* LEVEL_01.REL:0x1348C0: reviewed 80-byte candidate.
 * pinned C with gnu-ee-trial links 72 bytes; first differs at +12.
 * Retry: Recover the source aliasing and return shape that reloads the global pointer
 * after storing the record field; the current linked body is shorter.
 * No matching credit.
 */
extern void *memset(void *, int, unsigned int);
extern unsigned int *volatile D_00207094;

int func_001348C0(void *record)
{
    if (record != 0) {
        memset(record, 0, 0x18);
        D_00207094 = (unsigned int *)record;
        ((unsigned int *)record)[1] = 0;
        D_00207094[0] = 0;
    }
    return record != 0;
}
