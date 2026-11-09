/* LEVEL_10.REL:0x19F298: reviewed 152-byte candidate, held for ABI review.
 * Computes two scale values from a record and calls the render helpers.
 * gnu-ee-trial-divpad C with gnu-ee-trial links 152/152 bytes and is byte-
 * exact at this USA placement, but the prototypes disagree.
 * It declares func_003960 returning void with (int), but the accepted
 * LEVEL_10_003960.c defines it returning void with (long long).
 * It declares func_0034C8 returning void with (int, int, float, float), but
 * the accepted LEVEL_10_0034C8.c defines it returning void with (pointer,
 * pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern float func_001168(void);
extern void func_0037D8(void *a, int b, float c, float d);
extern void func_003960(int a);
extern void func_0034C8(int a, int b, float c, float d);

void func_19F298(char *a0)
{
    char *s0;
    char *s1;
    float one = 1.0f;
    float k;
    float f;

    s1 = *(char **)(a0 + 0x58);
    s0 = a0 + 0x30;
    f = func_001168();
    func_0037D8(s0, 0, one, -f);
    func_003960(0);
    k = one - *(float *)(s1 + 0x74) / 7.0f;
    k = k + k;
    func_0034C8(101, 3, k + 2.0f, one);
}
