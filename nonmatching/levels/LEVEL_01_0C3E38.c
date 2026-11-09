/* LEVEL_01.REL:0x0C3E38: reviewed 356-byte candidate, held for ABI review.
 * Sets up one global object with fixed parameters, then registers thirteen
 * numbered entries on it and marks it ready.
 * pinned C with gnu-ee-trial links 356/356 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It declares func_0B9B18 returning void with (pointer, int, int, int), but
 * the accepted LEVEL_01_0B9B18.c defines it returning void with no arguments.
 * It declares func_0B9998 returning void with (pointer, int, int), but the
 * accepted LEVEL_01_0B9998.c defines it returning int with (pointer, int,
 * int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    short v;
    short pad;
} Pair;

typedef struct {
    char pad_00[0x14];
    unsigned int flags_14;
} Obj;

typedef struct {
    char pad_00[0x24];
    int mode_24;
} Game;

extern Obj D_003291B0;
extern int D_0020038C;
extern Game *D_001F3FAC;

extern void func_0B9B18(Obj *o, int a, unsigned int b, int c);
extern void func_0AE708(int id, Pair *out, float f);
extern void func_0B9E90(Obj *o, int a, int b, int c, int d);
extern void func_0B9E78(Obj *o, int a, unsigned int b);
extern void func_0B9998(Obj *o, unsigned int a, unsigned int b);
extern void func_0B9A78(Obj *o, int a, int b);
extern int func_1324B0(int i);
extern int func_0BA240(Obj *o, int a, int b, int c, int d, int e, int f, int g, unsigned int h);
extern void func_0B9C10(Obj *o);

void func_0C3E38(void)
{
    Pair buf[4];
    unsigned int i;
    int v;
    int j;

    func_0B9B18(&D_003291B0, D_0020038C, 0x20800, 0);
    func_0AE708(0x1FB, buf, 0.0f);
    func_0B9E90(&D_003291B0, buf[0].v, buf[1].v, buf[2].v, buf[3].v);
    func_0B9E78(&D_003291B0, 0x1FA, 0xFFFFFFFF);
    func_0B9998(&D_003291B0, 0x40602020, 0xFFB07050);
    for (i = 0xBB9; i < 0xBC6; i++) {
        j = i - 0xBB8;
        func_0B9A78(&D_003291B0, 1, 1);
        v = i + 15;
        if (v == 0xBCA) {
            if (D_001F3FAC->mode_24 == 2) {
                v = 0xBD6;
            }
        }
        func_0BA240(&D_003291B0, func_1324B0(i), v, j, 0, 0, 1, 0, 0xFFFFFFFF);
    }
    D_003291B0.flags_14 |= 0x14;
    func_0B9C10(&D_003291B0);
}
