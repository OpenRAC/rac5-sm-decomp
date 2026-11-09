/* LEVEL_01.REL:0x0C34C0: reviewed 108-byte candidate, held for ABI review.
 * Clears a flag byte, runs two helpers when a cached handle is set, then
 * clears two words.
 * pinned C with gnu-ee-trial links 108/108 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It declares func_11A438 returning void with (int), but the accepted
 * LEVEL_01_11A438.c defines it returning void with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern unsigned char D_001FF000;
extern unsigned int D_001FEFFC;
extern int D_001FEF90;
extern int D_001FEF94;
extern void func_11A4C8(void);
extern void func_11A438(unsigned int a);
extern void func_0A6448(void);

void func_0C34C0(void)
{
    D_001FF000 = 0;
    if (D_001FEFFC != 0xFFFFFFFFU) {
        func_11A4C8();
        func_11A438(D_001FEFFC);
        D_001FEFFC = 0xFFFFFFFFU;
    }
    func_0A6448();
    D_001FEF90 = 0;
    D_001FEF94 = 0;
}
