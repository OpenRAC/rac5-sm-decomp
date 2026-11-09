/* LEVEL_15.REL:0x0F5FD0: reviewed 112-byte candidate, held for ABI review.
 * Allocates a record, sets two fields to fixed values, and returns it; a
 * second helper scales a delta into a shared block.
 * pinned C with gnu-ee-trial links 112/112 bytes and is byte-exact at this and
 * 1 other USA placement, but the prototypes disagree.
 * It declares func_0D4FE0 returning pointer with (int, int, pointer, int), but
 * the accepted LEVEL_15_0D4FE0.c defines it returning void with (pointer,
 * pointer, pointer, pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
void *func_0D4FE0(int a0, int a1, unsigned char *a2, int a3);
void func_0F5FB0(void);
extern unsigned char D_0016F170[];
extern unsigned char D_002A8B58[];

struct Rec {
    unsigned int w00;
    unsigned int w04;
    void *w08;
};

struct Blk {
    unsigned char pad00[4];
    int w04;
    unsigned char pad08[0x18 - 0x08];
    int w18;
};

struct Rec *func_0F5FD0(void)
{
    struct Rec *r;

    r = (struct Rec *)func_0D4FE0(12, 0, D_0016F170, 0x40B);
    r->w04 = 2;
    r->w08 = (void *)func_0F5FB0;
    return r;
}

void func_0F6018(void *unused, int a1)
{
    struct Blk *b;

    b = (struct Blk *)D_002A8B58;
    b->w18 = ((a1 - b->w04) * -1227133513) >> 3;
}
