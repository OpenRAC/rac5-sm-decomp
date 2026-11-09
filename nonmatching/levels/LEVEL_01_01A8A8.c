/* LEVEL_01.REL:0x01A8A8: reviewed 144-byte candidate, held for ABI review.
 * Stores a global handle and runs a small mode-dependent sequence.
 * pinned C with gnu-ee-trial links 144/144 bytes and is byte-exact at this and
 * 14 other USA placements, but the prototypes disagree.
 * It declares func_027C28 returning void with (pointer), but the accepted
 * LEVEL_01_027C28.c defines it returning void with (int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern char *D_001F3FAC;
extern int D_0021A7F0;

int func_01AFC0(void);
int func_01AFD0(void);
void func_01AFF8(void);
void func_027480(int a0, int a1, int a2);
void func_027C28(void *a0);
void func_01A828(int a0, void *a1);

int func_01A8A8(int a0, int a1)
{
    char *s0;
    unsigned int r;
    int v;

    s0 = (char *)a0;
    if (a1 != 0) {
        v = D_0021A7F0;
        (*(int *)(D_001F3FAC + 0x1C64)) = v;
    }
    if ((unsigned int)(s0 - 1) < 10) {
        if (func_01AFC0() != 0) {
            r = (unsigned char)func_01AFD0();
            func_027480(0x90, r, 0xFF);
            func_01AFF8();
        }
    }
    func_027C28(s0);
    func_01A828(7, s0);
    return 1;
}
