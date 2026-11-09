/* LEVEL_01.REL:0x06A8D0: reviewed 308-byte candidate, held for ABI review.
 * Counts frames while a button is held and fires an action once the hold is
 * long enough.
 * pinned C with gnu-ee-trial links 308/308 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It declares func_03BE20 returning void with (pointer), but the accepted
 * LEVEL_01_03BE20.c defines it returning void with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern char *D_001F3FAC;

extern void func_03BE20(void *o);
extern int func_0011A8(int a0);
extern void func_0B6020(int a0);

int func_06A8D0(char *a0, unsigned int *a1)
{
    unsigned int pad;
    int st;

    if ((unsigned char)(*(unsigned long long *)(a0 + 0xF10) >> 5) & 1) {
        return 0;
    }
    pad = *a1;
    st = *(int *)(D_001F3FAC + 0x24);
    if ((pad & ((st == 2) ? 0x400 : 0x100)) != ((st == 2) ? 0x400 : 0x100)) {
        *(int *)(a0 + 0xEF8) = 0;
        *(unsigned long long *)(a0 + 0xF10) = *(unsigned long long *)(a0 + 0xF10) & ~1ULL;
        return 0;
    }
    if (!(*(unsigned char *)(a0 + 0xF10) & 1)) {
        *(unsigned int *)(a0 + 0xEF8) = *(unsigned int *)(a0 + 0xEF8) + 1;
        if (!((float)*(unsigned int *)(a0 + 0xEF8) < 8.00015926361084f)) {
            *(unsigned long long *)(a0 + 0xF10) = *(unsigned long long *)(a0 + 0xF10) | 1;
            func_03BE20(a0);
            if (func_0011A8(0) != 0) {
                func_0B6020(1);
                return 1;
            }
        }
    }
    return 0;
}
