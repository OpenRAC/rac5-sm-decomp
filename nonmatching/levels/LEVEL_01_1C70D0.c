/* LEVEL_01.REL:0x1C70D0, bounded 180-byte candidate.
 * Isolated pinned C object: 180 bytes; first linked
 * difference at body byte +28. Not linked into the accepted
 * gate or counted.
 * Reopen: The size is exact; the table base and count land in v0/v1 instead of v1/v0. Reopen by writing the table access before the count computation.
 */
extern char *D_00206D90;
extern void func_1C7188(void *);

void func_1C70D0(void)
{
    unsigned int magic = 0x9707D8E6;
    char *s = D_00206D90;
    unsigned int n = *(unsigned int *)(s + 0x38);
    char *item = 0;
    unsigned int i = 0;

    if (n != 0) {
        item = *(char **)(s + 0x34);
        do {
            if (*(int *)(item + 0x24) == (int)magic)
                goto found;
            i++;
            item += 0x44;
        } while (i < n);
        item = 0;
    }
found:
    if (item != 0) {
        char *cur = *(char **)(item + 0xC);
        char *end = cur + *(int *)(item + 0x30) * 0x80;
        if (cur != end) {
            do {
                if (*(unsigned int *)(cur + 0x64) & 1)
                    func_1C7188(cur);
                cur += 0x80;
            } while (cur != end);
        }
    }
}
