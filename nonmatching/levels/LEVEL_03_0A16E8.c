/* LEVEL_03.REL:0x0A16E8, bounded 184-byte candidate.
 * Isolated pinned C object: 160 bytes; first linked
 * difference at body byte +0. Not linked into the accepted
 * gate or counted.
 * Reopen: Recheck the measured register or order difference.
 */
typedef unsigned int QW __attribute__((mode(TI)));
typedef struct { unsigned int w; } __attribute__((packed)) PACK4;

QW *func_000A16E8(QW *p, unsigned int imm, QW *src, unsigned int count)
{
    PACK4 zero;
    unsigned int i;

    zero.w = 0;
    ((unsigned int *)p)[0] = (count + 1) | 0x10000000;
    ((unsigned int *)p)[1] = 0;
    ((unsigned int *)p)[2] = 0;
    ((unsigned int *)p)[3] = 0;
    *(PACK4 *)((char *)p + 16) = zero;
    *(PACK4 *)((char *)p + 20) = zero;
    *(PACK4 *)((char *)p + 24) = zero;
    *(unsigned int *)((char *)p + 28) = (count << 16) | imm | 0x6C000000;
    p += 2;
    for (i = 0; i < count; i++)
        *p++ = *src++;
    return p;
}
