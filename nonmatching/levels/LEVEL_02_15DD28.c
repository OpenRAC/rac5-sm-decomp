/* LEVEL_02.REL:0x15DD28: reviewed 160-byte candidate, held for ABI review.
 * Copies a four-float constant, runs setup helpers, then registers an entry.
 * pinned C with gnu-ee-trial links 160/160 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_041038 returning void with (int), but the accepted
 * LEVEL_02_041038.c defines it returning void with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern float D_0022CDF8[4];

int func_036FA0(void *a, int b);
void func_15D640(void *a, int b);
void func_15FD78(void *a);
void func_15F1A8(void *a);
void *func_08E8B8(int n);
void func_041038(int n);
void func_15DF80(void *a, void *b, void *c, int d);

void func_15DD28(char *a0)
{
    float v[4];
    void *p;

    v[0] = D_0022CDF8[0];
    v[1] = D_0022CDF8[1];
    v[2] = D_0022CDF8[2];
    v[3] = D_0022CDF8[3];
    if (func_036FA0(a0, 0) == 0) {
        func_15D640(a0, 2);
    }
    func_15FD78(a0);
    func_15F1A8(a0);
    p = func_08E8B8(0x10);
    func_041038(0);
    func_15DF80(a0, v, p, 1);
}
