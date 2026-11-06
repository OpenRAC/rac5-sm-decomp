/* LEVEL_01.REL:0x0D1800, bounded 56-byte retail body.
 * Pinned C links 56 bytes; first difference at body byte +6.
 * The pinned compiler links 56 bytes but first differs at byte +6 because two global address registers and their stores are scheduled differently. Reversing the independent C stores and five other qualified compiler routes miss. Reopen with the original initialization idiom or a narrowly qualified route.
 */
extern int D_002045DC;
extern int D_002045F0;
extern void func_0B6020(int);
extern void func_01A828(int, int);
void func_0D1800(void)
{
    D_002045DC = 0;
    D_002045F0 = 0;
    func_0B6020(0);
    func_01A828(4, 0);
}