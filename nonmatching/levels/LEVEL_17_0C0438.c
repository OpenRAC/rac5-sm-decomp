/* LEVEL_17.REL:0x0C0438, bounded 56-byte retail body.
 * Pinned C links 56 bytes; first difference at body byte +6.
 * The pinned compiler links 56 bytes but first differs at byte +6 because two global address registers and their stores are scheduled differently. Reversing the independent C stores and five other qualified compiler routes miss. Reopen with the original initialization idiom or a narrowly qualified route.
 */
extern int D_001A5A8C;
extern int D_001A5AA0;
extern void func_0A4590(int);
extern void func_018518(int, int);
void func_0C0438(void)
{
    D_001A5A8C = 0;
    D_001A5AA0 = 0;
    func_0A4590(0);
    func_018518(4, 0);
}