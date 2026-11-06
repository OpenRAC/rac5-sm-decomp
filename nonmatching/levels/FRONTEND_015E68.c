/* FRONTEND.REL:0x015E68: 21 reviewed USA placements.
 * Ghidra body: 140 bytes; pinned C links 132 bytes and first differs at +8.
 * The 12-byte ring copy has a shorter schedule; the retail copies before testing the count. Reopen with item and count aliasing evidence.
 * This source has no matching credit.
 */
struct Item {
    int a;
    int b;
    int c;
};

int func_015E68(void *a0, void *a1)
{
    char *buf = (char *)a0;
    struct Item tmp;
    int head;

    tmp = *(struct Item *)a1;
    if (*(int *)(buf + 0x68) != 8) {
        head = *(int *)(buf + 0x60);
        *(struct Item *)(buf + head * 12) = tmp;
        head++;
        if (head == 8)
            head = 0;
        *(int *)(buf + 0x60) = head;
        *(int *)(buf + 0x68) = *(int *)(buf + 0x68) + 1;
        return 1;
    }
    return 0;
}
