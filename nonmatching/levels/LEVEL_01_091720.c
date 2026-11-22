/* USA LEVEL_01.REL:0x091720 (22 November 2026): port of a sister decompilation
 * twin whose bytes compile exactly, not accepted.
 * The 60-byte body sits at the start of an 8,804-byte next-label interval. No
 * matching credit.
 */
/* LEVEL_01:0x091720 -- runs the particle init once, guarded by a flag. Ported from OpenRAC/rac5-sm-decomp src/boot/PART_Init__Fv.c (PART_Init__Fv). */
extern char D_001F6394;
extern void func_091630(void);

void func_091720(void) {
    if (D_001F6394 == 0) {
        func_091630();
        D_001F6394 = 1;
    }
}
