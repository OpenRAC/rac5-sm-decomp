/* LEVEL_07.REL:0x1C38F0: reviewed 168-byte candidate, held for ABI review.
 * Two small helpers: a status predicate, and a reset-and-refresh routine.
 * pinned C with gnu-ee-trial links 168/168 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_1751A8 returning int with (float, float, pointer, pointer,
 * pointer), but the accepted LEVEL_01_16CDE8.c defines it returning int with
 * (pointer, pointer, int, float, float).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern void func_1C1528(char *o);
extern void func_1C11F0(char *o);
extern unsigned char func_1751A8(float f0, float f1, void *p0, char *p1, void *p2);

int func_1C38F0(char *o)
{
    char *s;
    int r;

    s = *(char **)(o + 0x54);
    r = (unsigned char)s[0x3E] != 0;
    if (*(unsigned char *)(o + 0x45) == 0xD) {
        r |= 1;
    }
    return r;
}

void func_1C3910(char *o, unsigned char m)
{
    char *s2;
    char *s3;

    s2 = *(char **)(o + 0x54);
    s3 = *(char **)(o + 0x58);
    func_1C1528(o);
    *(unsigned char *)(o + 0x45) = m;
    *(int *)(o + 0x64) = *(int *)(o + 0x64) & ~8;
    func_1C11F0(o);
    s3[0xA8] = func_1751A8(0.5f, 0.75f, *(void **)(s2 + 0x2C), o, s2);
}
