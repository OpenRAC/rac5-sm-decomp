/* USA LEVEL_07.REL:0x198960, 156-byte candidate (14 November 2026).
 * Measured pinned: 8 differing words; first difference at +0x30.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
struct V198960 {
    float x;
    float y;
    float z;
};

struct S198960 {
    char pad00[0x30];
    float f30;
    float f34;
    float f38;
};

extern void *memset(void *d, int c, unsigned int n);
extern void func_128C10(struct V198960 *a0, char *a1, struct V198960 *a2);
extern char D_0021CFB0[];

void func_198960(struct S198960 *s, struct V198960 *o)
{
    struct V198960 t;
    struct V198960 *s2;

    s2 = (struct V198960 *)&s->f30;
    memset(&t, 0, 12);
    t.x = o->x - s->f30;
    t.z = o->z - s2->z;
    func_128C10(&t, D_0021CFB0, &t);
    o->x = s->f30 + t.x;
    o->z = s2->z + t.z;
}
