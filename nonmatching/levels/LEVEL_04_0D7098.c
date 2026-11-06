/* LEVEL_04.REL:0x0D7098, bounded 56-byte retail body.
 * Pinned C links 56 bytes; first difference at body byte +6.
 * The pinned compiler links 56 bytes but first differs at byte +6 because two global address registers and their stores are scheduled differently. Reversing the independent C stores and five other qualified compiler routes miss. Reopen with the original initialization idiom or a narrowly qualified route.
 */
extern int D_0021DA9C;
extern int D_0021DAB0;
extern void func_0BB828(int);
extern void func_01A4A8(int, int);
void func_0D7098(void)
{
    D_0021DA9C = 0;
    D_0021DAB0 = 0;
    func_0BB828(0);
    func_01A4A8(4, 0);
}