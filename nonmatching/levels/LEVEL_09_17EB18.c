/* LEVEL_09.REL:0x17EB18: reviewed 108-byte candidate, held for ABI review.
 * Seeds a scratch buffer from a table float and feeds eight table words to a
 * helper pair.
 * pinned C with gnu-ee-trial links 108/108 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_11EAB8 returning void with (int, int, pointer), but the
 * accepted LEVEL_01_1259F0.c defines it returning void with (pointer, pointer,
 * pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct P58_17EB18 {
    float f00;
};

struct T17EB18 {
    char pad00[0x54];
    int *p54;
    struct P58_17EB18 *p58;
};

extern char D_00201A88[];
extern void func_11D4D0(int *buf, char *addr, float f);
extern void func_11EAB8(int a, int b, int *buf);

void func_17EB18(struct T17EB18 *t)
{
    float f;
    unsigned int i;
    int *p;
    int v;
    int buf[12];

    f = t->p58->f00;
    p = t->p54;
    func_11D4D0(buf, D_00201A88, f);
    i = 0;
    do {
        v = p[i];
        i++;
        func_11EAB8(v, v, buf);
    } while (i < 8);
}
