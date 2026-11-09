/* LEVEL_01.REL:0x0BE780: reviewed 116-byte candidate, held for ABI review.
 * Sets a 64-bit flag and a halfword when a helper passes, then clears a state
 * byte through a helper.
 * pinned C with gnu-ee-trial links 116/116 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_06AB80 returning pointer with (pointer), but the accepted
 * LEVEL_01_06AB80.c defines it returning int with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Globals_00235140 {
    char pad0[0x59C];
    char *p59c;
    char pad1[0x3C0];
    unsigned long long flags;
};
extern struct Globals_00235140 D_00235140;
extern char *D_001F3FAC;
extern void *func_06AB80(void *);
extern void func_02F5C8(int, int);
extern void func_02F750(void);

void func_0BE780(void)
{
    if (func_06AB80(&D_00235140) != 0) {
        D_00235140.flags |= 0x4000000000000ULL;
        *(unsigned short *)(D_00235140.p59c + 0x74) = 0xFFFFu;
    }
    if (*(char *)(D_001F3FAC + 0x1c7e) != 0) {
        func_02F5C8(*(char *)(D_001F3FAC + 0x1c7e), 1);
        func_02F750();
    }
}
