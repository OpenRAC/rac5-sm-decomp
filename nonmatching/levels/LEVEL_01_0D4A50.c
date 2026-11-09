/* LEVEL_01.REL:0x0D4A50: reviewed 304-byte candidate, held for ABI review.
 * Sets up the scene object and clears a work buffer.
 * pinned C with gnu-ee-trial links 304/304 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It declares func_0B5400 returning void with (int), but the accepted
 * LEVEL_01_0B5400.c defines it returning void with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Scene {
    char pad_00[0x20];
    int flags_20;
    char pad_24[0x39 - 0x24];
    unsigned char b_39;
};

extern struct Scene D_0032CE80;
extern char D_00214658[];
extern char *D_00204A78;

extern void func_0B5400(int a);
extern void func_0B6020(int a);
extern void func_0AE708(int a, void *buf, float f);
extern int func_0A8680(void *buf);
extern int func_0A86B0(void *buf);
extern int func_0A86E0(void *buf);
extern int func_0A8798(void *buf);
extern void func_0AB3E0(struct Scene *s, int a, int b, int c, int d, int e);
extern char *func_0A63E0(int a);
extern void func_133DD8(int a, char *b, char *c);
extern void *memset(void *p, int c, unsigned int n);
extern void func_0D4B80(void);

void func_0D4A50(void)
{
    float buf[4];
    short x;
    short y;
    short z;
    char *p;
    struct Scene *s;

    func_0B5400(0);
    func_0B6020(6);
    func_0AE708(0x1CC, buf, 0.0f);
    s = &D_0032CE80;
    x = func_0A8680(buf);
    y = func_0A86B0(buf);
    z = func_0A86E0(buf);
    func_0AB3E0(s, x, y, z, (short)func_0A8798(buf), 0x40602020);
    s->flags_20 |= 0x840;
    s->b_39 = 0;
    p = func_0A63E0(0);
    D_00204A78 = func_0A63E0(1);
    func_133DD8(0, D_00214658, p);
    func_133DD8(1, D_00214658, p + 0x10000);
    memset(D_00204A78, 0, 0x20000);
    func_0D4B80();
}
