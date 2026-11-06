/* FRONTEND.REL:0x005C98: Ghidra body 108 bytes.
 * Pinned pure C links 128 bytes and first differs at +0.
 * Recheck modulo lowering and table index arithmetic. No matching credit.
 */
int func_005C98(const char *owner, long long column, int frame)
{
    char *table;
    int width;
    int count;
    if (owner == 0 || (table = *(char **)(owner + 0xc)) == 0) {
        return 0;
    }
    width = *(unsigned short *)(table + 0x2a);
    if (column < 0 || column >= (unsigned int)width) {
        return 0;
    }
    count = *(unsigned short *)(table + 0x2e);
    frame %= count;
    if (frame < 0) {
        frame += count;
    }
    return *(int *)(table + *(int *)(table + 0x18) +
                    4 * (width * frame + (int)column));
}
