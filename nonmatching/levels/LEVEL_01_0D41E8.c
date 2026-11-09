/* LEVEL_01.REL:0x0D41E8: reviewed 272-byte candidate, held for ABI review.
 * Updates the selected cell position globals for an entry.
 * pinned C with gnu-ee-trial links 272/272 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It declares func_024EC8 returning int with (pointer, int), but the accepted
 * LEVEL_01_024EC8.c defines it returning int with (int, int).
 * It declares func_024EF0 returning int with (pointer, int), but the accepted
 * LEVEL_01_024EF0.c defines it returning int with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct R { int f0; int f4; char pad[0x40]; int f48; int f4C; } R;
extern int D_002049A8;
extern int D_002049A4;
extern int D_00204968[][5];
extern void *D_002049B4;
extern int D_00204A18;
extern int D_00204A1C;
extern int D_0032CD38;
extern int func_024EC8(void *, int);
extern int func_024EF0(void *, int);
extern R *func_024670(void *, int);
extern int func_0D28C8(int, int);
void func_0D41E8(void *s)
{
    R *r;
    if (!s)
        s = (void *)D_00204968[D_002049A8][D_002049A4];
    if (!s || !func_024EC8(s, -1) || func_024EF0(s, -1)) {
        D_00204A18 = 0;
        D_00204A1C = 0;
        return;
    }
    if (s == D_002049B4)
        return;
    r = func_024670(s, -1);
    if (!r)
        return;
    if (r->f48)
        D_00204A18 = r->f48;
    else
        D_00204A18 = r->f0;
    if (r->f48)
        D_00204A1C = r->f4C;
    else
        D_00204A1C = r->f4;
    if (!func_0D28C8(D_00204A18, D_00204A1C))
        D_0032CD38 = 0;
}
