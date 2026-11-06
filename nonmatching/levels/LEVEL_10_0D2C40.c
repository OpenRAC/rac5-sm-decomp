/* LEVEL_10.REL:0x0D2C40, bounded 56-byte retail body.
 * Pinned C links 56 bytes; first difference at body byte +6.
 * The pinned compiler links 56 bytes but first differs at byte +6 because two global address registers and their stores are scheduled differently. Reversing the independent C stores and five other qualified compiler routes miss. Reopen with the original initialization idiom or a narrowly qualified route.
 */
extern int D_0020D5DC;
extern int D_0020D5F0;
extern void func_0B71F8(int);
extern void func_019EA8(int, int);
void func_0D2C40(void)
{
    D_0020D5DC = 0;
    D_0020D5F0 = 0;
    func_0B71F8(0);
    func_019EA8(4, 0);
}