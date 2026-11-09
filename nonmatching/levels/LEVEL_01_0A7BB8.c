/* LEVEL_01.REL:0x0A7BB8: reviewed 228-byte candidate, held for ABI review.
 * Finds which of three zones of a slot contains the given position.
 * pinned C with gnu-ee-trial links 228/228 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It defines the function returning int with (int, pointer), but the accepted
 * caller LEVEL_01_0A6670.c declares it returning pointer with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct Z { char pad[0x18]; float x0; float z0; float x1; float z1; } Z;
typedef struct Row { Z *z[3]; } Row;
extern Row D_001F7060[];
extern int D_001F68E4;
extern int func_0A69A0(int);
extern void func_0BC3E0(void);
int func_0A7BB8(int idx, float *pos)
{
    unsigned int i;
    if (!func_0A69A0(idx))
        return 0;
    for (i = 0; i < 3; i++) {
        Z *z = D_001F7060[idx].z[i];
        if (!z) {
            func_0BC3E0();
            return D_001F68E4;
        }
        if (pos[0] >= z->x0 && pos[0] <= z->x1 && pos[2] >= z->z0 && pos[2] <= z->z1)
            return i;
    }
    return 0;
}
