/* LEVEL_01.REL:0x15F438: reviewed 340-byte candidate, held for ABI review.
 * Picks a preset id or searches up to eight candidate ids, writing the
 * accepted id to the output byte.
 * pinned C with gnu-ee-trial links 340/340 bytes and is byte-exact at this and
 * 13 other USA placements, but the prototypes disagree.
 * It declares func_023D20 returning int with (pointer, int), but the accepted
 * LEVEL_01_023D20.c defines it returning void with (pointer, int).
 * It declares func_1DB620 returning int with (int, int, pointer), but the
 * accepted LEVEL_01_1DB620.c defines it returning void with (int, int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    char b[10];
} Hist;

typedef struct {
    char pad_00[0x12];
    unsigned char b_12;
    unsigned char b_13;
    unsigned char b_14;
} Pick;

typedef struct {
    char pad_00[0x54];
    Pick *pick_54;
} Actor;

typedef struct {
    char pad_00[0xF8];
    int f_F8;
} Other;

typedef struct {
    char pad_00[0x40];
    int f_40;
} Info;

extern int func_023D20(Other *b, int id);
extern Info *func_024670(int id, int f);
extern int func_1DB620(unsigned int key, int f, Actor *a);
extern int func_15F5E0(Actor *a, Other *b, Hist *h, unsigned char idx);
extern void *memset(void *p, int c, unsigned int n);

int func_15F438(Actor *a, unsigned char *out, Other *b)
{
    Pick *p;
    Info *w;
    Hist x;
    Hist t;
    unsigned char i;
    int id;
    int r;

    p = a->pick_54;
    if (p->b_14 != 0) {
        if (func_023D20(b, p->b_14) != 0) {
            w = func_024670(p->b_14, b->f_F8);
            r = func_1DB620(0x23823240, w->f_40, a);
            if (r != 0) {
                *out = p->b_14;
                return r;
            }
        }
    }
    memset(&t, 0, sizeof(t));
    t.b[0] = p->b_12;
    t.b[1] = p->b_13;
    x = t;
    for (i = 0; i < 8; i++) {
        id = func_15F5E0(a, b, &x, i + 2);
        w = func_024670(id, b->f_F8);
        r = func_1DB620(0x23823240, w->f_40, a);
        if (r != 0) {
            *out = id;
            return r;
        }
        x.b[i + 2] = id;
    }
    *out = 0;
    return 0;
}
