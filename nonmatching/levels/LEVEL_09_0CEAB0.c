/* LEVEL_09.REL:0x0CEAB0, bounded 56-byte retail body.
 * Pinned C links 56 bytes; first difference at body byte +6.
 * The pinned compiler links 56 bytes but first differs at byte +6 because two global address registers and their stores are scheduled differently. Reversing the independent C stores and five other qualified compiler routes miss. Reopen with the original initialization idiom or a narrowly qualified route.
 */
extern int D_001EE3DC;
extern int D_001EE3F0;
extern void func_0B32D0(int);
extern void func_019C18(int, int);
void func_0CEAB0(void)
{
    D_001EE3DC = 0;
    D_001EE3F0 = 0;
    func_0B32D0(0);
    func_019C18(4, 0);
}