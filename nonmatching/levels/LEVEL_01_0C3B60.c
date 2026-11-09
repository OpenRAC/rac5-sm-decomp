/* LEVEL_01.REL:0x0C3B60: reviewed 448-byte candidate, held for ABI review.
 * Plays the set of menu effects and selects the active entry.
 * gnu-ee-trial C with gnu-ee-trial links 448/448 bytes and is byte-exact at
 * this and 19 other USA placements, but the prototypes disagree.
 * It declares func_0BA408 returning pointer with (pointer), but the accepted
 * FRONTEND_0129E8.c defines it returning int with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    short x;
    short p0;
    short p1;
    short p2;
    unsigned short u4;
    unsigned short p3;
    unsigned short u6;
    unsigned short p4;
} R;
typedef struct {
    char p0[0xD0];
    int idx;
    int flag;
} Entry;
typedef struct {
    char p0[0x14];
    int v;
} Slot;

extern Entry D_003291B0;
extern Slot D_00329258;
extern Entry *D_00200390;
extern void func_0AEAA8(int a, unsigned int b, float c);
extern void func_0AE708(int a, R *r, float c);
extern int func_0A8680(R *r);
extern void func_0AA790(short a, short b, int c);
extern int func_1324B0(int a);
extern void func_0AB0F8(short a, short b, int c, float d, float e);
extern void func_0A9B58(short a, short b, int c, float d, float e);
extern void func_0A8CB0(int a);
extern void func_0BA460(void *p);
extern Entry *func_0BA408(void *p);
extern void func_0AB4C8(void *p);
extern void func_0AB500(void *p);
extern void func_134158(int a, R *r, unsigned int c);

void func_0C3B60(void)
{
    R r;
    Entry *e;

    func_0AEAA8(0x36, -1, 0.0f);
    func_0AE708(0x205, &r, 0.0f);
    func_0AA790(func_0A8680(&r), r.u6, func_1324B0(0x2C9));
    func_0AE708(0x207, &r, 0.0f);
    func_0AB0F8(r.u4, r.u6, func_1324B0(0x1CA), 0.9f, 0.9f);
    func_0AE708(0x201, &r, 0.0f);
    func_0A9B58(r.x, r.u6, func_1324B0(0x2CA), 0.9f, 0.9f);
    func_0A8CB0(0);
    func_0BA460(&D_003291B0);
    func_0A8CB0(1);
    e = func_0BA408(&D_003291B0);
    if (e) {
        D_00329258.v = func_1324B0(e->idx);
        if (D_00200390 != e) {
            func_0AB4C8(&D_00329258);
            D_00200390 = e;
        }
        func_0AB500(&D_00329258);
        if (e->flag) {
            func_0AE708(0x206, &r, 0.0f);
            func_134158(0, &r, -1);
        }
    }
}
