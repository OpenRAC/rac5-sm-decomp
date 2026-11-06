/* LEVEL_23.REL:0x0C8630, bounded 56-byte retail body.
 * Pinned C links 56 bytes; first difference at body byte +6.
 * The pinned compiler links 56 bytes but first differs at byte +6 because two global address registers and their stores are scheduled differently. Reversing the independent C stores and five other qualified compiler routes miss. Reopen with the original initialization idiom or a narrowly qualified route.
 */
extern int D_001D79DC;
extern int D_001D79F0;
extern void func_0ACDE8(int);
extern void func_019338(int, int);
void func_0C8630(void)
{
    D_001D79DC = 0;
    D_001D79F0 = 0;
    func_0ACDE8(0);
    func_019338(4, 0);
}