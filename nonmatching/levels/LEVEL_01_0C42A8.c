/* LEVEL_01.REL:0x0C42A8: reviewed 204-byte candidate, held for ABI review.
 * Initializes a global object from a queried record.
 * pinned C with gnu-ee-trial links 204/204 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * Another placement of the same form conflicts with an accepted prototype, so
 * the whole form is held.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern void func_0AE708(int id, void *buf, float f);
extern int func_0A8680(void *buf);
extern int func_0A86B0(void *buf);
extern int func_0A86E0(void *buf);
extern int func_0A8798(void *buf);
extern void func_0AB3E0(void *obj, int a, int b, int c, int d, int e);
extern int func_0A63E0(int a);
extern void func_0C4398(void);

typedef struct {
    char pad0[0x20];
    int flags;
    char pad1[0x15];
    char b39;
} D_00329368_t;

extern D_00329368_t D_00329368;
extern int D_0020039C;

void func_0C42A8(void)
{
    char buf[16];
    short a, b, c, d;
    D_00329368_t *p;


    func_0AE708(0x1F9, buf, 0.0f);
    p = &D_00329368;
    a = (short)func_0A8680(buf);
    b = (short)func_0A86B0(buf);
    c = (short)func_0A86E0(buf);
    d = (short)func_0A8798(buf);
    func_0AB3E0(p, a, b, c, d, 0x40602020);
    p->flags |= 0x840;
    p->b39 = 0;
    D_0020039C = func_0A63E0(0);
    func_0C4398();
}
