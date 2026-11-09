/* LEVEL_19.REL:0x15B498: reviewed 164-byte candidate, held for ABI review.
 * Dispatches on a mode byte, runs an optional check, then calls a float-
 * argument helper.
 * gnu-ee-trial C with gnu-ee-trial links 164/164 bytes and is byte-exact at
 * this USA placement, but the prototypes disagree.
 * It declares func_15C010 returning int with (int), but the accepted
 * LEVEL_19_15C010.c defines it returning int with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int func_15C010(int a);
extern void func_15B170(char *o, int a, int b);
extern void func_15BB18(char *o);
extern void func_15B540(char *o, float f);

void func_15B498(char *o, float f)
{
    unsigned char mode;
    char *p;
    char *q;

    mode = *(unsigned char *)(o + 0x45);
    p = *(char **)(o + 0x54);
    q = *(char **)(o + 0x58);
    switch (mode) {
    case 1:
        if (*(int *)p != 0 && func_15C010(*(int *)p)) {
            func_15B170(o, 2, 0);
        }
        break;
    case 6:
        if (*(int *)(q + 0x98) == 0) {
            func_15BB18(o);
        }
        break;
    }
    func_15B540(o, f);
}
