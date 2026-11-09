/* LEVEL_10.REL:0x19F538: reviewed 180-byte candidate, held for ABI review.
 * Clears a table of pending handles, releasing every handle other than the
 * current global slot.
 * pinned C with gnu-ee-trial links 180/180 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_097D08 returning void with (int), but the accepted
 * LEVEL_10_097D08.c defines it returning void with (pointer).
 * It declares func_07D5E8 returning void with (pointer, pointer, int), but the
 * accepted LEVEL_10_07D5E8.c defines it returning float with (pointer,
 * pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern const unsigned int D_0022E48C;
extern int D_001FF398;

void func_097D08(int handle);
void func_07D5E8(char *a0, char *a1, int a2);

void func_19F538(char *obj)
{
    char *state = *(char **)(obj + 0x58);
    unsigned int i = 0;

    if (D_0022E48C != 0) {
        int *arr = (int *)(state + 0xE8);
        do {
            if (arr[i] != 0) {
                if (arr[i] == D_001FF398) {
                    D_001FF398 = 0;
                } else {
                    func_097D08(arr[i]);
                }
                arr[i] = 0;
            }
            i++;
        } while (i < D_0022E48C);
    }
}

void func_19F5C0(char *obj)
{
    char *p;

    p = *(char **)(*(char **)(obj + 0x58) + 0x58);
    if (p != 0) {
        func_07D5E8(obj, p, 0x56);
    }
}
