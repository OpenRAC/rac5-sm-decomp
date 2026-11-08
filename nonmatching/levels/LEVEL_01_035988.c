/* LEVEL_01.REL:0x035988: reviewed 104-byte candidate.
 * pinned C with gnu-ee-trial links 100 bytes; first differs at +2.
 * Retry: Reconstruct the global-base register allocation and store schedule with the
 * measured shared record layout.
 * No matching credit.
 */
extern unsigned char D_002330F8[];

void func_035988(void)
{
    unsigned char *base = D_002330F8;
    int count = 1;
    int *current = (int *)(base + 0x1a04);
    int toggle;
    int stride;
    int selected;
    do {
        *current = 0;
        count--;
        current--;
    } while (count >= 0);

    toggle = *(int *)(base + 0x1a98) ^ 1;
    stride = *(int *)(base + 0x1a94);
    *(int *)(base + 0x1a98) = toggle;
    selected = *(int *)(base + 0x1a8c + toggle * 4);
    *(int *)(base + 0x1a88) = 1;
    *(int *)(base + 0x1a9c) = selected;
    *(int *)(base + 0x1aa0) = stride * 0x90 + selected;
}
