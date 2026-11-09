/* LEVEL_01.REL:0x16B020: reviewed 76-byte candidate, held for ABI review.
 * Retained attempt body.
 * pinned C with gnu-ee-trial links 76/76 bytes and is byte-exact at this and
 * 15 other USA placements, but the prototypes disagree.
 * It declares func_06E400 returning void with (pointer), but the accepted
 * LEVEL_01_06E400.c defines it returning void with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
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
