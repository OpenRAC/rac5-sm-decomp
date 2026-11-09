/* LEVEL_01.REL:0x0B52C0: reviewed 316-byte candidate, held for ABI review.
 * Resets a slot's state tables, samples four values from a fixed seed block
 * and registers the slot record with them.
 * pinned C with gnu-ee-trial links 316/316 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It declares func_0B52A0 returning void with (int), but the accepted
 * LEVEL_01_0B52A0.c defines it returning void with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct Rec0B52C0 {
    char pad_00[0x14];
    int f_14;
    char pad_18[0x3C];
} Rec0B52C0;

extern short D_001FC658[];
extern short D_001FC660[];
extern int D_001FC670[];
extern int D_001FC690[];
extern Rec0B52C0 D_003284E8[];

void func_0B52A0(int x);
int func_0A8680(int *seed);
int func_0A86B0(int *seed);
int func_0A86E0(int *seed);
int func_0A8798(int *seed);
void func_0AB3E0(Rec0B52C0 *r, short a, short b, short c, short d, unsigned int e);

void func_0B52C0(int slot, int x)
{
    int seed[4];

    func_0B52A0(x);
    D_001FC658[slot] = 0xEF;
    D_001FC660[slot] = 0x87;
    D_001FC670[slot] = 1;
    seed[0] = 0x77;
    seed[2] = 0x167;
    seed[1] = 0x43;
    seed[3] = 0xCB;
    D_001FC690[slot] = 0;
    D_003284E8[slot].f_14 = 0;
    func_0AB3E0(&D_003284E8[slot], func_0A8680(seed), func_0A86B0(seed), func_0A86E0(seed), func_0A8798(seed), 0x40602020U);
    D_003284E8[slot].f_14 = 0;
}
