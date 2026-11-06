/* LEVEL_02.REL:0x09B890, bounded 172-byte candidate.
 * Isolated pinned C object: 180 bytes; first linked
 * difference at body byte +1. Not linked into the accepted
 * gate or counted.
 * Reopen: GCC hoists p[0x18]/p[0x19] out of the loops. Reopen with non-invariant reloads and a single lhu before the inner loop.
 */
typedef struct {
    int *ptr;
    unsigned short idx;
    unsigned short count;
} E8;

void func_09B890(int *p)
{
    int total = p[0] * p[1];
    int i = 0;
    int j;

    if (total <= 0)
        return;
    do {
        E8 *e = (E8 *)(p[0x18] + i * 8);

        for (j = 0; j < e->count; j++) {
            *(unsigned short *)*(int *)(p[0x19] + (e->idx + j) * 0x10 + 0xc) = 0xFFFF;
        }
        if (e->ptr != 0) {
            int *q = e->ptr;

            do {
                q[5] = 0;
                q = (int *)*q;
            } while (q != 0);
        }
        e->ptr = 0;
        e->count = 0;
        i++;
    } while (i < total);
}
