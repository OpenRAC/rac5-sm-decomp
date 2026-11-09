/* LEVEL_01.REL:0x0169B8: reviewed 224-byte candidate, held for ABI review.
 * Runs one step of an effect if the counter allows it.
 * gnu-ee-trial C with gnu-ee-trial links 224/224 bytes and is byte-exact at
 * this and 2 other USA placements, but the prototypes disagree.
 * It declares func_03BE20 returning void with (pointer), but the accepted
 * LEVEL_01_03BE20.c defines it returning void with no arguments.
 * It declares func_04BEE8 returning int with no arguments, but the accepted
 * LEVEL_01_04BEE8.c defines it returning void with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern char D_00235140[];
extern unsigned func_00D5A8(void);
extern void func_03BE20(char *p);
extern int func_04BEE8(void);
extern int func_06AB80(char *p);
extern void func_06AA40(char *p, int v);
extern void func_003BA0(int v);
extern float func_0013D8(void);
extern void func_003A18(int a, int b, float x, float y);

int func_0169B8(int a, int *cnt, char *p, float f)
{
    if (cnt != 0 && *cnt < 0) {
        return 1;
    }
    if (p == 0) {
        p = D_00235140;
    }
    if (func_00D5A8() < 5) {
        return 0;
    }
    func_03BE20(p);
    if (func_04BEE8() != 0) {
        return 0;
    }
    if (func_06AB80(p) != 0) {
        func_06AA40(p, 0);
    }
    func_003BA0(0);
    func_003A18(a, 1, f, -func_0013D8());
    if (cnt != 0) {
        *cnt = *cnt - 1;
    }
    return 0;
}
