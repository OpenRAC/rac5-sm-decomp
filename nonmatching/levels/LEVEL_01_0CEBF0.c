/* LEVEL_01.REL:0x0CEBF0: reviewed 364-byte candidate, held for ABI review.
 * Queries a series of screen positions and registers each with a text lookup,
 * then refreshes the active entry.
 * pinned C with gnu-ee-trial links 364/364 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It declares func_0BA408 returning pointer with (pointer), but the accepted
 * FRONTEND_0129E8.c defines it returning int with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Loc0CEBF0 {
    short h0;
    short pad2[3];
    unsigned short h8;
    unsigned short padA;
    unsigned short hC;
    unsigned short padE;
};

struct Rec0CEBF0 {
    char pad0[0xD4];
    int idx;
};

struct Ent0CEBF0 {
    int w0;
    int w4;
    int w8;
    int wC;
};

extern char D_0032C8E8[];
extern struct Ent0CEBF0 D_00202E18[];
extern void func_0AEAA8(int a, unsigned int b, float f);
extern void func_0AE708(int id, struct Loc0CEBF0 *out, float f);
extern int func_0A8680(struct Loc0CEBF0 *l);
extern int func_1324B0(int id);
extern void func_0AA790(short a, short b, int c);
extern void func_0AAEA0(short a, short b, int c);
extern void func_0A98C0(short a, short b, int c);
extern void func_0A8CB0(int a);
extern void func_0BA460(char *p);
extern struct Rec0CEBF0 *func_0BA408(char *p);
extern void func_134158(int a, struct Loc0CEBF0 *l, unsigned int c);

void func_0CEBF0(void)
{
    struct Loc0CEBF0 l;
    struct Rec0CEBF0 *r;
    short a;
    short b;

    func_0AEAA8(0x2E, 0xFFFFFFFF, 0.0f);
    func_0AE708(0x1C3, &l, 0.0f);
    a = func_0A8680(&l);
    b = l.hC;
    func_0AA790(a, b, func_1324B0(0x2CF));
    func_0AE708(0x1C4, &l, 0.0f);
    a = l.h8;
    b = l.hC;
    func_0AAEA0(a, b, func_1324B0(0x1CA));
    func_0AE708(0x1BF, &l, 0.0f);
    b = l.hC;
    a = l.h0;
    func_0A98C0(a, b, func_1324B0(0x2FE));
    func_0A8CB0(0);
    func_0BA460(D_0032C8E8);
    func_0A8CB0(1);
    r = func_0BA408(D_0032C8E8);
    if (r != 0) {
        if (((struct Ent0CEBF0 *)((r->idx << 4) + (int)D_00202E18))->wC != 0) {
            func_0AE708(0x1C2, &l, 0.0f);
            func_134158(0, &l, 0xFFFFFFFF);
        }
    }
}
