/* LEVEL_01.REL:0x0B49E0: reviewed 256-byte candidate, held for ABI review.
 * Draws the fading gauge segments for a slot.
 * pinned C with gnu-ee-trial links 256/256 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It declares func_0A8E80 returning void with (int, int), but the held byte-
 * exact candidate LEVEL_01_0A8E80.c defines it returning void with (int,
 * pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct Ent { unsigned int a; float h; int z; } Ent;
typedef struct G { int first; Ent arr[8]; } G;
extern G D_003284A0;
extern unsigned int D_001FC35C;
extern void func_0A8E80(int, int);
extern void func_0AC4B0(int, int, int, int, unsigned int);
void func_0B49E0(int idx)
{
    unsigned int a, c1, c2;
    int y;
    if (D_003284A0.arr[idx].a) {
        func_0A8E80(idx, 0);
        a = D_003284A0.arr[idx].a << 24;
        y = (int)(225.0f - D_003284A0.arr[idx].h * 175.0f);
        D_001FC35C = (D_001FC35C & 0xFFFFFF) | a;
        c1 = a | 0x226644;
        c2 = a | 0x4422;
        func_0AC4B0(0x1C3, 0x2F, 0x1D8, 0xE4, c1);
        func_0AC4B0(0x1C6, 0x32, 0x1D5, 0xE1, c2);
        func_0AC4B0(0x1C6, (short)y, 0x1D5, 0xE1, D_001FC35C);
    }
}
