/* LEVEL_15.REL:0x114940: reviewed 144-byte candidate, held for ABI review.
 * Stores four resolved handles from a source table into the object.
 * pinned C with gnu-ee-trial links 144/144 bytes and is byte-exact at this and
 * 1 other USA placement, but the prototypes disagree.
 * It declares func_080488 returning void with (pointer, pointer), but the
 * accepted LEVEL_01_09FB18.c defines it returning void with (pointer, int).
 * It declares func_12BFB0 returning int with (int), but the held byte-exact
 * candidate LEVEL_15_12BFB0.c defines it returning void with (int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
void func_080488(void *a0, void *a1);
void func_114100(char *record);
int func_12BFB0(int a0);
int func_12E158(int a0);
int func_11A8C0(int a0);
int func_0CDAD8(int a0);

void func_114940(char *a0, int a1, char *a2, void *a3)
{
    int v;

    func_080488(a0, a3);
    func_114100((char *)a1);
    *(int *)(a0 + 0x2C) = a1;
    v = func_12BFB0(*(int *)(a2 + 0));
    *(int *)(a0 + 0x1C) = v;
    v = func_12E158(*(int *)(a2 + 4));
    *(int *)(a0 + 0x20) = v;
    v = func_11A8C0(*(int *)(a2 + 8));
    *(int *)(a0 + 0x24) = v;
    if (*(int *)(a2 + 0xC) != 0) {
        v = func_0CDAD8(*(int *)(a2 + 0xC));
    } else {
        v = -1;
    }
    *(int *)(a0 + 0x28) = v;
}
