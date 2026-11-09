/* LEVEL_01.REL:0x04C1D0: reviewed 124-byte candidate, held for ABI review.
 * Runs a status check, optional hook, then one of two follow-up calls.
 * pinned C with gnu-ee-trial links 124/124 bytes and is byte-exact at this and
 * 14 other USA placements, but the prototypes disagree.
 * It declares func_028568 returning void with (pointer), but the accepted
 * LEVEL_01_028568.c defines it returning void with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern unsigned char D_001F45E9[];

void func_028568(void *p);
void func_19DB30(void *p);
int func_0B4370(void);
void func_0B43A8(void);
int func_0282D8(void);
void func_02A2C8(void);
void func_017D60(void);

void func_04C1D0(void *p)
{
    func_028568(p);
    if (D_001F45E9[0] != 0) {
        func_19DB30(p);
    }
    if (func_0B4370() != 0) {
        func_0B43A8();
    }
    if (func_0282D8() != 0) {
        func_02A2C8();
    } else {
        func_017D60();
    }
}
