/* LEVEL_15.REL:0x09BB10 -- pick one of two floats depending on a flag byte.

   The retail reloads the page anchor 0x150000 three times, once per access,
   with the three displacements 0x16A4 / 0x16A8 / 0x16AC.  The pinned
   compiler folds three accesses to one anchor into a single base register,
   so three page-anchored symbols of the same page keep the three reloads
   apart; %hi is the page (0x15) and the displacement stays literal. */

extern char D_00150000[];
extern char D_00150800[];
extern char D_00151000[];

float func_09BB10(void)
{
    if (*(unsigned char *)(D_00150000 + 0x16A4) == 0) {
        return *(float *)(D_00150800 + 0xEA8);
    }
    return *(float *)(D_00151000 + 0x6AC);
}
