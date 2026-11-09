/* LEVEL_01.REL:0x0D7930: reviewed 300-byte candidate, held for ABI review.
 * Draws the selected entry's overlay and its offset marker.
 * gnu-ee-trial C with gnu-ee-trial links 300/300 bytes and is byte-exact at
 * this and 19 other USA placements, but the prototypes disagree.
 * It declares func_0A8E80 returning void with (int, int), but the held byte-
 * exact candidate LEVEL_01_0A8E80.c defines it returning void with (int,
 * pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct Ent { int a; int b; int c; int d; int e; int f; } Ent;
typedef struct L { char pad[0xC]; unsigned short h; char pad2[2]; } L;
extern int D_0020672C;
extern int D_0020674C;
extern Ent D_00206750[];
extern int D_00206734;
extern unsigned short D_00206728;
extern int D_00206740;
extern int D_0032D160;
extern int D_0032D178;
extern void func_0CA018(int);
extern void func_0A6280(int *);
extern void func_0A8E80(int, int);
extern void func_0AE938(int, int, int, int, unsigned int, float);
extern void func_0A8CA0(unsigned int);
extern void func_0AB500(int *);
extern void func_0AE708(int, L *, float);
extern int func_0A8680(L *);
extern void func_0AAA48(int, int, int, float, float);
void func_0D7930(void)
{
    L l;
    float z;
    if (D_0020672C) {
        func_0CA018(0x14);
        z = 0.0f;
        func_0A6280(&D_0032D160);
        func_0A8E80(2, 0);
        func_0AE938(D_00206750[D_0020674C].a, 0xEF, 0x87, D_00206750[D_0020674C].b, 0xFFFFFFFF, z);
        func_0A8CA0(0xFFFFFFFF);
        func_0AB500(&D_0032D178);
        if (!D_00206734) {
            func_0AE708(D_00206750[D_0020674C].e, &l, z);
            func_0AAA48((short)func_0A8680(&l), (short)(l.h + D_00206728), D_00206740, 0.9f, 0.9f);
        }
    }
}
