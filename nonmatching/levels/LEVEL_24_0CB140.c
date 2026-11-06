/* LEVEL_24.REL:0x0CB140, bounded 56-byte retail body.
 * Pinned C links 56 bytes; first difference at body byte +6.
 * The pinned compiler links 56 bytes but first differs at byte +6 because two global address registers and their stores are scheduled differently. Reversing the independent C stores and five other qualified compiler routes miss. Reopen with the original initialization idiom or a narrowly qualified route.
 */
extern int D_001D525C;
extern int D_001D5270;
extern void func_0AF8B0(int);
extern void func_018E18(int, int);
void func_0CB140(void)
{
    D_001D525C = 0;
    D_001D5270 = 0;
    func_0AF8B0(0);
    func_018E18(4, 0);
}