/* LEVEL_08.REL:0x20F970: reviewed 200-byte candidate, held for ABI review.
 * Pops one node from a global free list, initializes it from the argument, and
 * returns it or zero.
 * pinned C with gnu-ee-trial links 200/200 bytes and is byte-exact at this and
 * 2 other USA placements, but the prototypes disagree.
 * It declares func_20F788 returning void with (pointer, int), but the held
 * byte-exact candidate LEVEL_08_20F788.c defines it returning void with
 * (pointer, pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Y {
    int w0;
    char pad0[4];
    char *w8;
};

struct X {
    char pad0[8];
    float f8;
    char pad1[0xC0 - 0x0C];
    int wC0;
    char pad2[0xC8 - 0xC4];
    struct Y *wC8;
};

extern struct Y *D_003EB468;
void func_20F788(struct X *p, int v);
int func_091D18(char *a0, char *a1);
void func_090C88(struct X *p, char *q, float f);

struct X *func_20F970(struct Y *a0, float a, float b)
{
    struct Y *g;
    struct X *s2;
    char *s0;
    char *s1;

    g = D_003EB468;
    if (g == 0) {
        s2 = 0;
    } else {
        D_003EB468 = (struct Y *)g->w0;
        s2 = (struct X *)((char *)g + 0x10);
    }
    if (s2 == 0) {
        return 0;
    }
    s1 = a0->w8;
    func_20F788(s2, a0->w0);
    s0 = (char *)s2 + 0x5C + s2->wC0 * 40;
    s2->wC8 = a0;
    func_091D18(s1, s0);
    func_090C88(s2, s0, a);
    s2->f8 = b;
    return s2;
}
