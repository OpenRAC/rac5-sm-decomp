/* LEVEL_01.REL:0x0B9C10, bounded 180-byte candidate.
 * Isolated pinned C object: 180 bytes; first linked
 * difference at body byte +17. Not linked into the accepted
 * gate or counted.
 * Reopen: $a2/$a3 are inverted between the index and the offset. Reopen with a loop shape that changes the pseudo priorities.
 */
extern void func_0B9CC8(void *);

int func_000B9C10(int *p)
{
    int saved;
    unsigned int i;
    int offset;
    unsigned int limit;

    p[0xC] = 2;
    saved = p[0xB];
    i = 0;
    if (p[0xD] != 0) {
        offset = 0;
        do {
            *(int *)p[0xB] = p[9] + offset;
            p[0xB] = p[0xB] + 4;
            limit = p[0xA];
            if (limit < (unsigned int)p[0xB]) {
                goto fail;
            }
            i = i + 1;
            offset = offset + 0xE4;
        } while (i < (unsigned int)p[0xD]);
    }
    *(int *)p[0xB] = 0;
    p[0xB] = p[0xB] + 4;
    limit = p[0xA];
    if (limit < (unsigned int)p[0xB]) {
        goto fail;
    }
    p[0] = saved;
    p[1] = p[0xD];
    func_0B9CC8(p);
    return 1;
fail:
    p[0xB] = limit;
    return 0;
}
