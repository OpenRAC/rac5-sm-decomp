/* LEVEL_01.REL:0x0B5210: reviewed 140-byte candidate, held for ABI review.
 * Clears a per-index slot pair and a 0x54-stride record field.
 * pinned C with gnu-ee-trial links 140/140 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It defines the function returning void with (int, int), but the accepted
 * caller LEVEL_01_0B52A0.c declares it returning void with (int, pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Rec {
    char pad[0x14];
    int f;
    char rest[0x54 - 0x18];
};

extern int D_001FC688[];
extern int D_001FC668[];
extern struct Rec D_003284E8[];
extern void func_0B6020();

void func_0B5210(int idx, int a1)
{
    D_001FC668[idx] = 0;
    if (D_001FC688[idx] != 0) {
        if (a1 == 0) {
            func_0B6020(7);
        }
    }
    D_001FC688[idx] = 0;
    D_003284E8[idx].f = 0;
}
