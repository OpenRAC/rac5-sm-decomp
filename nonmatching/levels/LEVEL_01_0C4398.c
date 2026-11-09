/* LEVEL_01.REL:0x0C4398: reviewed 344-byte candidate, held for ABI review.
 * Initialises the scene object and registers the tabled entries from the
 * highest id downwards.
 * pinned C with gnu-ee-trial links 344/344 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It declares func_0B9B18 returning void with (pointer, int, int, int), but
 * the accepted LEVEL_01_0B9B18.c defines it returning void with no arguments.
 * It declares func_0B3560 returning int with (int), but the accepted
 * LEVEL_01_0B3560.c defines it returning void with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Obj {
    char pad_00[0x14];
    unsigned int flags_14;
};

extern struct Obj D_003292C0;
extern int D_0020039C;

extern void func_0B9B18(struct Obj *o, int a, int b, int c);
extern void func_0AE708(int a, void *buf, float f);
extern void func_0B9E90(struct Obj *o, int a, int b, int c, int d);
extern void func_0B9E78(struct Obj *o, int a, unsigned int b);
extern int func_0B9998(struct Obj *o, int a, int b);
extern int func_0B9A78(struct Obj *o, int a, int b);
extern int func_0B3560(int k);
extern int func_1324B0(int id);
extern int func_0BA240(struct Obj *o, int id, int k, int a, int b, int c, int d, int e, unsigned int f);
extern void func_0B9C10(struct Obj *o);

void func_0C4398(void)
{
    int buf[4];
    int i;
    int k;

    func_0B9B18(&D_003292C0, D_0020039C, 0x20800, 0);
    func_0AE708(0x1FB, buf, 0.0f);
    func_0B9E90(&D_003292C0, (short)buf[0], (short)buf[1], (short)buf[2], (short)buf[3]);
    func_0B9E78(&D_003292C0, 0x1FA, 0xFFFFFFFF);
    func_0B9998(&D_003292C0, 0x40602020, 0xFFB07050);
    for (i = 0x93; i >= 3; i--) {
        k = -i;
        if (func_0B3560(k) != 0) {
            if (k != -0x88) {
                func_0B9A78(&D_003292C0, 1, 1);
                func_0BA240(&D_003292C0, func_1324B0(i + 0x7CF), k, 0, 0, 0, 1, 0, 0xFFFFFFFF);
            }
        }
    }
    D_003292C0.flags_14 |= 0x14;
    func_0B9C10(&D_003292C0);
}
