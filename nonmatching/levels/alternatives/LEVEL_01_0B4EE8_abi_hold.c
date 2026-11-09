/* LEVEL_01.REL:0x0B4EE8: reviewed 304-byte candidate, held for ABI review.
 * Counts down per-slot timers and dispatches on the slot state and input
 * flags.
 * pinned C with gnu-ee-trial links 304/304 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It declares func_0B5210 returning void with (int, int), but the accepted
 * LEVEL_01_0B5210.c defines it returning void with (int, pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int D_001FC668[];
extern unsigned int D_001FC670[];
extern int D_001FC680[];
extern int D_001FC698[];

void func_0B5210(int slot, int arg);
void func_0CA308(void);
void func_0CA018(int arg);
void func_0477C0(void);
void func_0B6020(int arg);

void func_0B4EE8(int slot, void *arg)
{
    unsigned int flags = (unsigned int)arg;
    int v;
    unsigned int state;

    D_001FC698[slot] = 0;
    v = D_001FC668[slot];
    if (v != 0) {
        v = v - 1;
        D_001FC668[slot] = v;
        if (v == 0) {
            func_0B5210(slot, 0);
        } else {
            func_0CA308();
            func_0CA018(0x14);
            v = D_001FC680[slot];
            if (v != 0) {
                D_001FC680[slot] = v - 1;
            } else {
                state = D_001FC670[slot];
                switch (state) {
                case 1:
                    if (flags & 0x1000) {
                        func_0477C0();
                        D_001FC698[slot] = 1;
                        func_0B6020(1);
                    }
                    break;
                case 0:
                    break;
                case 2:
                    if (flags & 0x1000) {
                        func_0477C0();
                        D_001FC698[slot] = 2;
                    } else if (flags & 0x4000) {
                        func_0477C0();
                        D_001FC698[slot] = 1;
                    }
                    break;
                }
            }
        }
    }
}
