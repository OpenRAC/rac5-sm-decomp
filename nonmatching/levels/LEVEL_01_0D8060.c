/* LEVEL_01.REL:0x0D8060: reviewed 140-byte candidate.
 * pinned C with gnu-ee-trial links 144 bytes; first differs at +0.
 * Retry: Identify the original twelve-byte record alignment and copy-before-guard
 * ABI; current packed-struct copy differs at entry and links four bytes long.
 * No matching credit.
 */
typedef struct __attribute__((packed)) {
    unsigned long long first;
    unsigned int second;
} Entry;

int func_0D8060(char *queue, const Entry *item)
{
    Entry value = *item;
    int index;
    if (*(int *)(queue + 0x68) == 8)
        return 0;
    index = *(int *)(queue + 0x60);
    *(Entry *)(queue + index * 12) = value;
    index++;
    *(int *)(queue + 0x60) = index;
    if (index == 8)
        *(int *)(queue + 0x60) = 0;
    *(int *)(queue + 0x68) = *(int *)(queue + 0x68) + 1;
    return 1;
}
