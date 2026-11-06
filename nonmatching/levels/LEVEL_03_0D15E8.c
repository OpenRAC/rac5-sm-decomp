/* LEVEL_03.REL:0x0D15E8, bounded 56-byte retail body.
 * Pinned C links 56 bytes; first difference at body byte +6.
 * The pinned compiler links 56 bytes but first differs at byte +6 because two global address registers and their stores are scheduled differently. Reversing the independent C stores and five other qualified compiler routes miss. Reopen with the original initialization idiom or a narrowly qualified route.
 */
extern int D_0021CC5C;
extern int D_0021CC70;
extern void func_0B5E08(int);
extern void func_01A590(int, int);
void func_0D15E8(void)
{
    D_0021CC5C = 0;
    D_0021CC70 = 0;
    func_0B5E08(0);
    func_01A590(4, 0);
}