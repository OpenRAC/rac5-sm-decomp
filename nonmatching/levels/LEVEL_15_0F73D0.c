/* LEVEL_15.REL:0x0F73D0: reviewed 152-byte candidate, held for ABI review.
 * Starts four setup calls, then decays a timer and retriggers a callback.
 * pinned C with gnu-ee-trial links 152/152 bytes and is byte-exact at this and
 * 1 other USA placement, but the prototypes disagree.
 * It declares func_0979C8 returning void with (int, int), but the accepted
 * LEVEL_15_0979C8.c defines it returning void with (pointer, pointer).
 * It declares func_0976C0 returning void with (int), but the accepted
 * LEVEL_15_0976C0.c defines it returning void with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern void func_0979C8(int a, int b);
extern void func_0AA660(int a);
extern void func_09C980(int a);
extern void func_0976C0(int a);
extern void func_093E00(void);
extern char D_002A8B58[];
extern unsigned char D_0015596C;

void func_0F73D0(void)
{
    char *base;
    char *g;
    float *t;
    float n;

    func_0979C8(1, 3);
    func_0AA660(20);
    func_09C980(24);
    func_0976C0(90);
    g = D_002A8B58;
    base = g + 0x40000;
    t = (float *)(base + 0x4048);
    if (0.0f < *t) {
        n = *t - 1.0f;
        *t = n;
        if (n <= 0.0f || D_0015596C != 0) {
            *t = 0.0f;
            func_093E00();
        }
    }
}
