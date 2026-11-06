/* LEVEL_06.REL:0x0CC100, bounded 56-byte retail body.
 * Pinned C links 56 bytes; first difference at body byte +6.
 * The pinned compiler links 56 bytes but first differs at byte +6 because two global address registers and their stores are scheduled differently. Reversing the independent C stores and five other qualified compiler routes miss. Reopen with the original initialization idiom or a narrowly qualified route.
 */
extern int D_001F34DC;
extern int D_001F34F0;
extern void func_0B0848(int);
extern void func_019028(int, int);
void func_0CC100(void)
{
    D_001F34DC = 0;
    D_001F34F0 = 0;
    func_0B0848(0);
    func_019028(4, 0);
}