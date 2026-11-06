/* LEVEL_16.REL:0x0C0EF8, bounded 56-byte retail body.
 * Pinned C links 56 bytes; first difference at body byte +6.
 * The pinned compiler links 56 bytes but first differs at byte +6 because two global address registers and their stores are scheduled differently. Reversing the independent C stores and five other qualified compiler routes miss. Reopen with the original initialization idiom or a narrowly qualified route.
 */
extern int D_001B248C;
extern int D_001B24A0;
extern void func_0A50B0(int);
extern void func_018B98(int, int);
void func_0C0EF8(void)
{
    D_001B248C = 0;
    D_001B24A0 = 0;
    func_0A50B0(0);
    func_018B98(4, 0);
}