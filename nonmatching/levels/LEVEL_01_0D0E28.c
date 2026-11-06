/* LEVEL_01.REL:0x0D0E28, bounded 148-byte candidate.
 * Isolated pinned C object: 156 bytes; first linked
 * difference at body byte +4. Not linked into the accepted
 * gate or counted.
 * Reopen: GCC duplicates the second table-scan test and hoists invariants; the retail keeps two top-tested loops whose back edge uses bnel. Reopen with a search loop without an internal return, then fix the block layout and the global-pointer preload.
 */
typedef struct {
    char pad[0x34];
    char *base;
    int count;
} POOL;

extern char D_00206D90[];
extern int D_0032CAA0;

int func_0D0E28(int id, int key)
{
    POOL *g;
    char *e;
    char *end;
    char *p;

    if (id != 0) {
        g = *(POOL **)D_00206D90;
        e = g->base;
        end = e + g->count * 0x44;
        while (e != end) {
            if (*(int *)(e + 0x24) == id) {
                p = *(char **)(e + 4);
                if (p == 0)
                    return 0;
                end = p + *(unsigned char *)(e + 0x3c) * 0x34;
                while (p != end) {
                    if (*(int *)(p + 0x20) == key) {
                        D_0032CAA0 = (int)p;
                        return 1;
                    }
                    p += 0x34;
                }
                return 0;
            }
            e += 0x44;
        }
    }
    return 0;
}
