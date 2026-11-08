/* LEVEL_01.REL:0x098480: reviewed 120-byte candidate.
 * pinned C with gnu-ee-trial links 116 bytes; first differs at +8.
 * Retry: Recover the signed half-value and global-record update schedule, including
 * the one-iteration loop shape.
 * No matching credit.
 */
extern char D_0029AEF8[];

void func_098480(int limit, int first, int second)
{
    char *record = D_0029AEF8 + 0x14;
    int half_first = first / 2;
    int half_second = second / 2;
    unsigned int index = 0;

    do {
        if (*(unsigned char *)(record + 0x62) == 0) {
            if (*(int *)(record + 0x1C) < limit)
                *(int *)(record + 0x1C) = limit;
            if (*(int *)(record - 0x0C) < half_first)
                *(int *)(record - 0x0C) = half_first;
            if (*(int *)record < half_second)
                *(int *)record = half_second;
        }
        ++index;
        record += 0x170C;
    } while (index == 0);
}
