/* LEVEL_16.REL:0x112438: reviewed 72-byte candidate, held for ABI review.
 * Writes the stored value into bits 16-26 of the flag word, passes the word on
 * and keeps the result.
 * pinned C with gnu-ee-trial links 72/72 bytes and is byte-exact at this and 4
 * other USA placements, but the prototypes disagree.
 * It declares func_0E7A98 returning int with (int), but the accepted
 * LEVEL_16_0E7A98.c defines it returning void with (int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern unsigned int D_001B4BCC;
extern unsigned int D_0024E2A8;
extern int D_002DF5D0;
extern int func_0E7A98(unsigned int);

void func_112438(void)
{
    D_001B4BCC = (D_001B4BCC & 0xF800FFFF) | (D_0024E2A8 << 16);
    D_002DF5D0 = func_0E7A98(D_001B4BCC);
}
