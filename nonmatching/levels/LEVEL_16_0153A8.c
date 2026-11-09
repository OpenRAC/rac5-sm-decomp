/* LEVEL_16.REL:0x0153A8: reviewed 172-byte candidate, held for ABI review.
 * Formats a label for the object, selected by a flag from its data, and
 * submits it.
 * pinned C with gnu-ee-trial links 172/172 bytes and is byte-exact at this and
 * 4 other USA placements, but the prototypes disagree.
 * It declares func_022868 returning int with (int, int), but the accepted
 * LEVEL_16_022868.c defines it returning int with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern void func_021468(char *record, int wanted);
extern void func_021890(void *object, void *value, int mode, int extra);
extern int func_022868(int mode, int field);
extern char *func_10F330(int id);
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_0A7FD0(int a0, char *a1, int a2, int a3);
extern char D_001DE4E8[];

void func_0153A8(char *o, int mode)
{
    char buf[64];
    int v;

    func_021468(o, mode);
    func_021890(o, buf, mode, 0x40);
    v = func_022868(mode, *(int *)(o + 0xF8));
    if (v != 0) {
        sprintf(D_001DE4E8, func_10F330(0x238), buf);
    } else {
        sprintf(D_001DE4E8, func_10F330(0x237), buf);
    }
    func_0A7FD0(*(int *)(o + 0xF4) - 1, D_001DE4E8, 0, 0x5A);
}
