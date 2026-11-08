/* LEVEL_02.REL:0x09E688: reviewed 92-byte candidate.
 * pinned C with gnu-ee-trial links 92 bytes; first differs at +10.
 * Retry: Recover end-pointer arithmetic, loop register lifetimes and original load-
 * delay schedule from a natural chain traversal.
 * No matching credit.
 */
void func_09E688(int *object)
{
    int start = object[3];
    int end = start + object[4] * 0x8c - 0x8c;
    int current = start;
    if (start == end) {
        *(int *)(start + 0x84) = 0;
    } else {
        do {
            int next = current + 0x8c;
            *(int *)(current + 0x84) = next;
            current = next;
        } while (current != end);
        *(int *)(current + 0x84) = 0;
    }
    object[2] = (int)(object + 1);
    object[1] = (int)(object + 1);
    object[0] = start;
}
