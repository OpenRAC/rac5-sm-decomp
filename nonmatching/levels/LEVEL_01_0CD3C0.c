/* LEVEL_01.REL:0x0CD3C0: reviewed 308-byte candidate, held for ABI review.
 * Initialises the scene object and registers seven table entries.
 * pinned C with gnu-ee-trial links 308/308 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It declares func_0BA240 returning int with (pointer, int, int, int, int,
 * int, int, int, int), but the accepted LEVEL_01_0BA240.c defines it returning
 * void with (int, int, int, int, int, int, int, int, int).
 * It declares func_0B9C10 returning void with (pointer), but the accepted
 * LEVEL_01_0B9C10.c defines it returning int with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Tab {
    int w_00;
    int w_04;
    int w_08;
    int w_0C;
};

struct Obj {
    char pad_00[0x14];
    unsigned int flags_14;
};

extern struct Obj D_0032C118;
extern struct Tab D_00214210[];
extern char D_00201C48[];

extern void func_0B9B38(struct Obj *o, char *a, int b, int c);
extern void func_0AE708(int a, void *buf, float f);
extern void func_0B9E90(struct Obj *o, int a, int b, int c, int d);
extern void func_0B9E78(struct Obj *o, int a, unsigned int b);
extern int func_0B9998(struct Obj *o, int a, int b);
extern int func_0B9A78(struct Obj *o, int a, int b);
extern int func_0BA240(struct Obj *o, int a, int b, int c, int d, int e, int f, int g, unsigned int h);
extern void func_0B9C10(struct Obj *o);

void func_0CD3C0(void)
{
    int buf[4];
    unsigned int i;

    func_0B9B38(&D_0032C118, D_00201C48, 0x1000, 0);
    func_0AE708(0x277, buf, 0.0f);
    func_0B9E90(&D_0032C118, (short)buf[0], (short)buf[1], (short)buf[2], (short)buf[3]);
    func_0B9E78(&D_0032C118, 0x276, 0xFFFFFFFF);
    func_0B9998(&D_0032C118, 0x40602020, 0xFFB07050);
    for (i = 0; i < 7; i++) {
        func_0B9A78(&D_0032C118, 1, 1);
        if (D_00214210[i].w_00 != 6) {
            func_0BA240(&D_0032C118, D_00214210[i].w_08, i, 0, 0, 0, 0, 0, 0xFFFFFFFF);
        }
    }
    D_0032C118.flags_14 |= 0x14;
    func_0B9C10(&D_0032C118);
}
