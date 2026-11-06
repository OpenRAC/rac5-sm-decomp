/* LEVEL_03.REL:0x094DF0, bounded 172-byte candidate.
 * Isolated pinned C object: 172 bytes; first linked
 * difference at body byte +37. Not linked into the accepted
 * gate or counted.
 * Reopen: The size is exact; the inner loop permutes the a2/a3, a0/a1 and v0/v1 pairs. Reopen by changing the allocation order, for example by removing the intermediate index while keeping both shifts.
 */
void func_094DF0(int *p)
{
    int n = p[0] * p[1];
    int i = 0;

    if (n > 0) {
        do {
            int *e = (int *)(p[0x18] + i * 8);
            unsigned short c = *(unsigned short *)((char *)e + 6);
            int j = 0;

            if (c != 0) {
                do {
                    unsigned int idx = *(unsigned short *)((char *)e + 4);
                    char *row = (char *)p[0x19] + idx * 0x10;
                    int *slot = *(int **)(row + j * 0x10 + 0xC);
                    *(unsigned short *)slot = 0xFFFF;
                    j++;
                } while (j < c);
            }
            {
                int *q = (int *)*e;
                if (q != 0) {
                    do {
                        q[5] = 0;
                        q = (int *)*q;
                    } while (q != 0);
                }
            }
            *e = 0;
            *(unsigned short *)((char *)e + 6) = 0;
            i++;
        } while (i < n);
    }
}
