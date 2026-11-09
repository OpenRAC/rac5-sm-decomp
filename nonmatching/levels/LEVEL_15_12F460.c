/* LEVEL_15.REL:0x12F460: reviewed 140-byte candidate, held for ABI review.
 * Calls five helpers with pairs of table addresses.
 * pinned C with gnu-ee-trial links 140/140 bytes and is byte-exact at this and
 * 1 other USA placement, but the prototypes disagree.
 * It declares func_1119C0 returning void with (pointer, pointer), but the
 * accepted LEVEL_15_1119C0.c defines it returning void with (int, pointer).
 * It declares func_1067D0 returning void with (pointer, pointer), but the
 * accepted LEVEL_15_1067D0.c defines it returning void with (int, pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern char D_0015DE68[];
extern char D_0015CCD0[];
extern char D_0015DE98[];
extern char D_0015CE30[];
extern char D_0015DEC8[];
extern char D_002EFA48[];
extern char D_0015DEF8[];
extern char D_002ED190[];
extern char D_0015DF28[];
extern char D_002ECF18[];
extern char D_0015DF58[];
extern char D_0015C6F8[];

void func_1119C0(void *a, void *b);
void func_10E858(void *a, void *b);
void func_1067D0(void *a, void *b);
void func_101A00(void *a, void *b);
void func_10ABD8(void *a, void *b);

void func_12F460(void)
{
    func_1119C0(D_0015DE68, D_0015CCD0);
    func_1119C0(D_0015DE98, D_0015CE30);
    func_10E858(D_0015DEC8, D_002EFA48);
    func_1067D0(D_0015DEF8, D_002ED190);
    func_101A00(D_0015DF28, D_002ECF18);
    func_10ABD8(D_0015DF58, D_0015C6F8);
}
