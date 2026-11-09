/* LEVEL_01.REL:0x0CE790: reviewed 472-byte candidate, held for ABI review.
 * Builds a list of 25 table entries on the gui object.
 * pinned C with gnu-ee-trial links 472/472 bytes and is byte-exact at this and
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
typedef struct { char pad0[0x14]; unsigned flags; } G;
typedef struct { short a; char p1[2]; short b; char p2[2]; short c; char p3[2]; short d; char p4[2]; } R4;
typedef struct {
    int w;
    unsigned short h4;
    unsigned short h6;
    unsigned short h8;
    unsigned char b0A;
    char pad0B;
} E;
extern G D_0032C7D8;
extern int D_00202DFC;
extern E D_00202CD0[];
extern void func_0B9B18(G *g, int a, int b, int c);
extern void func_0AE708(int a, R4 *r, float f);
extern void func_0B9E90(G *g, int a, int b, int c, int d);
extern void func_0B9E78(G *g, int a, unsigned b);
extern void func_0B9998(G *g, unsigned a, unsigned b);
extern int func_0274B0(int a, int b);
extern int func_027680(int a);
extern void func_0B9A78(G *g, int a, int b);
extern int func_1324B0(int a);
extern void func_0BA240(G *g, int a, int b, int c, int d, int e, int f, int h, unsigned s);
extern void func_0B9C10(G *g);
extern void func_0CE968(void);

void func_0CE790(void)
{

    R4 r;
    E *e;
    unsigned i;
    int t;

    func_0B9B18(&D_0032C7D8, D_00202DFC, 0x20800, 0);
    func_0AE708(0x26D, &r, 0.0f);
    func_0B9E90(&D_0032C7D8, r.a, r.b, r.c, r.d);
    func_0B9E78(&D_0032C7D8, 0x26B, 0xFFFFFFFFu);
    func_0B9998(&D_0032C7D8, 0x40602020u, 0xFFB07050u);
    for (i = 0; i < 25; i++) {
        e = &D_00202CD0[i];
        if (func_0274B0((e->w >> 3) + 0x77, e->w & 7)) {
            func_0B9A78(&D_0032C7D8, 1, 1);
            func_0BA240(&D_0032C7D8, func_1324B0(e->h4), 0, e->h6, e->h8, i + 1, 1, 0, 0xFFFFFFFFu);
        } else {
            t = func_027680(e->b0A) ? e->h8 : 0x2C6;
            func_0B9A78(&D_0032C7D8, 1, 1);
            func_0BA240(&D_0032C7D8, func_1324B0(e->h4), 0, 0x2C6, t, 0x1A, 1, 0, 0xFFFFFFFFu);
        }
    }
    D_0032C7D8.flags |= 0x14;
    func_0B9C10(&D_0032C7D8);
    func_0CE968();
}
