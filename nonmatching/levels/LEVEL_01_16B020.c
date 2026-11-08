/* LEVEL_01.REL:0x16B020: Isolated C links exactly 76/76 bytes, but the ABI remains a semantic hold.
 * Retry: Trace the object-key getter at all 16 sites and reconcile its 32 other
 * accepted C callers with divergent pointer/integer prototypes. The 16 accepted
 * forwarding wrappers already have object-stable typed C and 80/80 exact placements;
 * review the two remaining int declarations among the 24 other nested-callee callers.
 * Require independent ABI QA, unchanged accepted objects and a combined 21-module
 * gate before promotion.
 * No C matching credit.
 */
extern char *func_16B640(void *object);
extern void func_06E400(char *record);

void func_16B020(void *object)
{
    char *record = func_16B640(object);
    if (record != 0) {
        func_06E400(record + 4);
        *(int *)(record + 0x40) = 0;
        *(int *)(record + 0x44) = 0;
        *(int *)(record + 0x64) = 0;
        *(int *)(record + 0x68) = 1;
    }
}
