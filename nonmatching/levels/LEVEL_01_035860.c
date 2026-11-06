/* LEVEL_01.REL:0x035860: Ghidra body 68 bytes.
 * Pinned pure C links 80 bytes and first differs at +0.
 * Recheck the shared global structure layout and store schedule. No matching credit.
 */
extern int D_00234B80;
extern int D_00234B84;
extern int D_00234B88;
extern int D_00234B8C;
extern int D_00234B90;
extern char D_00217E58[];
extern void func_035A30(void *, int);

void func_035860(void)
{
    D_00234B80 = 1;
    D_00234B88 = 0;
    D_00234B90 = 0;
    D_00234B8C = 0;
    D_00234B84 = 0;
    func_035A30(D_00217E58, 4);
}
