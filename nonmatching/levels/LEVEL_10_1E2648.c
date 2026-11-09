/* LEVEL_10.REL:0x1E2648: reviewed 136-byte candidate, held for ABI review.
 * Runs a helper, then when a float is not positive calls two slots of a
 * record.
 * pinned C with gnu-ee-trial links 136/136 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_02FD88 returning void with (pointer, pointer, pointer, int,
 * float), but the accepted LEVEL_10_02FD88.c defines it returning void with
 * (float, pointer, pointer, pointer, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern char D_002167C0[];
extern char D_00234340[];
extern void func_02FD88(void *a0, void *a1, void *a2, int a3, float f12);

void func_1E2648(char *a0)
{
    char *s0;
    char *p;
    int r;
    void **fn;

    s0 = *(char **)(a0 + 0x58);
    func_02FD88(*(void **)(a0 + 0x54), a0, D_00234340, 2, *(float *)D_002167C0);
    if (*(float *)(a0 + 0x70) <= 0.0f) {
        p = *(char **)s0;
        fn = (void **)p;
        r = ((int (*)(void *))fn[0])(a0);
        ((void (*)(void *, int))fn[1])(a0, r);
    }
}
