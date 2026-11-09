/* LEVEL_16.REL:0x058BB0: reviewed 132-byte candidate, held for ABI review.
 * Lazily acquires a handle, releases an optional resource, resets flags and
 * runs three update hooks.
 * pinned C with gnu-ee-trial links 132/132 bytes and is byte-exact at this and
 * 4 other USA placements, but the prototypes disagree.
 * It declares func_125978 returning void with (pointer), but the accepted
 * FRONTEND_001E08.c defines it returning void with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int func_058618(char *o, int z);
extern void func_125978(void *p);
extern void func_05A3D8(char *o);
extern void func_058D50(char *o);
extern void func_058C38(char *o);

void func_058BB0(char *o)
{
    int v;

    if (*(int *)(o + 0xB8C) == 0) {
        v = func_058618(o, 0);
        *(int *)(o + 0xB8C) = v;
        if (v == 0) {
            return;
        }
    }
    if (*(void **)(o + 0x5AC) != 0) {
        func_125978(*(void **)(o + 0x5AC));
    }
    *(unsigned char *)(o + 0xBCB) = 0;
    *(unsigned char *)(o + 0x9CF) = 1;
    *(float *)(o + 0xFC4) = 0.13333334f;
    func_05A3D8(o);
    func_058D50(o);
    func_058C38(o);
}
