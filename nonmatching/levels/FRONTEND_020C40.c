/* FRONTEND.REL:0x020C40: reviewed 324-byte candidate, held for ABI review.
 * Queues a pending request, or starts the stored operation when a slot is free
 * and records its result.
 * pinned C with gnu-ee-trial links 324/324 bytes and is byte-exact at this and
 * 5 other USA placements, but the prototypes disagree.
 * It declares func_020780 returning int with (int), but the accepted
 * FRONTEND_020780.c defines it returning int with no arguments.
 * It declares func_003E10 returning void with no arguments, but the accepted
 * FRONTEND_003E10.c defines it returning int with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern unsigned char D_00032818;
extern unsigned char D_00032819;
extern int D_0003281C;
extern int D_00032814;
extern char *D_00027E9C;

extern int func_021168(void);
extern int func_020780(int a0);
extern void func_0036F8(void);
extern int func_0032C0(int a0, int a1);
extern int func_0205B8(int a0);
extern int func_020AE8(void);
extern void func_003E10(void);
extern void func_003550(int a0);
extern void func_020BE0(void);
extern void MEMCARD_SetHardcoreModeBit(unsigned int a0, int a1) __asm__("MEMCARD_SetHardcoreModeBit__FUib");

int func_020C40(int a0)
{
    unsigned int s1;
    int hc;

    if (D_00032818 != 0) {
        if (D_00032819 != 0) {
            return 0;
        }
        D_00032819 = 1;
        D_0003281C = a0;
        return 1;
    }
    if (func_021168() < 0) {
        return 0;
    }
    if (func_020780(0) == 3) {
        return 0;
    }
    func_0036F8();
    if (D_00032814 == 0) {
        return 0;
    }
    if (func_0032C0(0x92, 0xFF) != 0) {
        return 0;
    }
    if (func_0205B8(1) != 0) {
        return 0;
    }
    s1 = func_020AE8();
    if (s1 == 0xFFFFFFFF) {
        return 0;
    }
    func_003E10();
    if (*(int *)(D_00027E9C + 0x1C70) == 0x16) {
        func_003550(3);
    }
    func_020BE0();
    hc = func_0032C0(0xA0, 0xFF) != 0;
    MEMCARD_SetHardcoreModeBit(func_021168(), hc);
    *(int *)(D_00032814 + 4) = 1;
    *(unsigned int *)(D_00032814 + 0xC) = s1;
    return 1;
}
