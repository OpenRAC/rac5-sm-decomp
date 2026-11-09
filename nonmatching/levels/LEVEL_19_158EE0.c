/* LEVEL_19.REL:0x158EE0: reviewed 332-byte candidate, held for ABI review.
 * Sets the object's mode byte; leaving mode 0 clears the effect counter,
 * entering mode 4 stops the running effect and announces the target.
 * pinned C with gnu-ee-trial links 332/332 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_115AC8 returning pointer with (int), but the accepted
 * LEVEL_19_115AC8.c defines it returning void with (int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern char D_002E5758[];
extern int sprintf(char *buf, const char *fmt, ...);
extern char *func_113490(int v);
extern void func_06F9A8(int h, int f);
extern char *func_10F9D0(int id);
extern char *func_115AC8(int t);
extern void func_0A78A8(int slot, char *text, int a, int b);
extern void func_115CD8(int t);
extern void func_115BB0(int a, int b, int c, int d);

void func_158EE0(char *o, unsigned char st)
{
    char *ply;
    char *ctl;

    ctl = *(char **)(o + 0x58);
    ply = func_113490(*(int *)(*(char **)(o + 0x54) + 0x10));
    switch (st) {
    case 0:
        *(int *)(ctl + 4) = 0;
        break;
    case 4:
        if (*(int *)ctl != 0) {
            func_06F9A8(*(int *)ctl, 1);
            *(int *)ctl = 0;
        }
        if (*(int *)(ctl + 8) == *(int *)(ply + 0xFC)) {
            sprintf(D_002E5758, func_10F9D0(0x28B), func_115AC8(*(int *)(ctl + 8)));
            func_0A78A8(*(int *)(ply + 0xF4) - 1, D_002E5758, 0, 0x5A);
        } else {
            sprintf(D_002E5758, func_10F9D0(0x28C), func_115AC8(*(int *)(ctl + 8)));
            func_0A78A8(*(int *)(ply + 0xF4) - 1, D_002E5758, 0, 0x5A);
        }
        func_115CD8(*(int *)(ctl + 8));
        func_115BB0(1, 0, 0x5A, 0);
        break;
    }
    *(unsigned char *)(o + 0x45) = st;
}
