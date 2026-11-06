/* LEVEL_01.REL:0x0D28C8, bounded 148-byte candidate.
 * Isolated pinned C object: 164 bytes; first linked
 * difference at body byte +4. Not linked into the accepted
 * gate or counted.
 * Reopen: Recheck the measured register or order difference.
 */
typedef struct {
    char pad[0x34];
    char *base;
    int count;
} POOL;

extern char D_00206D90[];
extern int D_0032CD38;

int func_0D28C8(int id, int key)
{
    POOL *g;
    char *e;
    char *end;
    char *p;

    if (id == 0)
        return 0;
    g = *(POOL **)D_00206D90;
    e = g->base;
    end = e + g->count * 0x44;
    if (e == end)
        return 0;
    while (*(int *)(e + 0x24) != id)
        e += 0x44;
    p = *(char **)(e + 4);
    if (p == 0)
        return 0;
    end = p + *(unsigned char *)(e + 0x3c) * 0x34;
    if (p == end)
        return 0;
    while (*(int *)(p + 0x20) != key)
        p += 0x34;
    D_0032CD38 = (int)p;
    return 1;
}
