/* LEVEL_03.REL:0x048D18, bounded 196-byte candidate.
 * Isolated pinned C object: 180 bytes; first linked
 * difference at body byte +12. Not linked into the accepted
 * gate or counted.
 * Reopen: Recheck the measured register or order difference.
 */
typedef struct {
    char pad[0x14];
    unsigned int flags;   /* 0xc0 + 0x14 = 0xd4 */
} SUB;

extern char D_0020C62C[];

int func_048D18(int p)
{
    SUB *q = (SUB *)(p + 0xc0);
    int v;

    if (*(int *)(p + 0x168) == 2 &&
        *(float *)(p + 0x128) <= 0.0f &&
        *(float *)(p + 0x134) <= 0.0f &&
        (*(float *)(p + 0x140) -= 1.0f) <= 0.0f) {
        if (*(int *)(*(char **)D_0020C62C + 0x24) == 2) {
            if ((q->flags & 0x4100) == 0)
                return 0;
            v = *(int *)(p + 0x5ac);
        } else {
            if ((q->flags & 0x4000) == 0)
                return 0;
            v = *(int *)(p + 0x5ac);
        }
        if (v != 0) {
            *(short *)(p + 0x102) = 0xF;
            return 1;
        }
    }
    return 0;
}
