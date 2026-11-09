/* LEVEL_03.REL:0x05A708: reviewed 112-byte candidate, held for ABI review.
 * Runs three setup helpers, clears a flag byte, then applies two helper calls
 * to a global pointer when a check passes.
 * pinned C with gnu-ee-trial links 112/112 bytes and is byte-exact at this and
 * 6 other USA placements, but the prototypes disagree.
 * It declares func_038728 returning void with (pointer, int, int), but the
 * accepted LEVEL_03_038728.c defines it returning void with (int, int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
void func_179A40(void);
void func_17B3F0(void);
void func_178300(void);
int func_038228(void *p);
void func_038728(void *p, int a, int b);

extern void *D_0020CC64;
extern unsigned char D_0020CEB4;

void func_05A708(void)
{
    void *s0;

    func_179A40();
    func_17B3F0();
    func_178300();
    s0 = D_0020CC64;
    D_0020CEB4 = 0;
    if (func_038228(s0) != 0) {
        func_038728(s0, 4, 0);
        func_038728(s0, 5, 0);
    }
}
