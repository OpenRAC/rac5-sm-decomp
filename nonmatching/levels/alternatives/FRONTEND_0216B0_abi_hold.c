/* FRONTEND.REL:0x0216B0: reviewed 128-byte candidate, held for ABI review.
 * Clears one 0x824-byte record and resets the selection.
 * pinned C with gnu-ee-trial links 128/128 bytes and is byte-exact at this and
 * 20 other USA placements, but the prototypes disagree.
 * It defines the function returning int with (int), but the accepted caller
 * FRONTEND_0215E0.c declares it returning void with (int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    char data[0x818];
    int tail;
    char pad[8];
} Rec;

extern int D_0003284C;
extern Rec D_001EC1E8[];
extern void *memset(void *, int, unsigned int);

int func_0216B0(unsigned int index)
{
    int selected;
    if (index >= 8) {
        return 0;
    }
    memset(&D_001EC1E8[index], 0, sizeof(Rec));
    selected = index == D_0003284C;
    D_001EC1E8[index].tail = 0;
    if (selected) {
        D_0003284C = -1;
    }
    return 1;
}
