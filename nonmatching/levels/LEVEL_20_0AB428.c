/* LEVEL_20.REL:0x0AB428, bounded 56-byte retail body.
 * Pinned C links 56 bytes; first difference at body byte +6.
 * The pinned compiler links 56 bytes but first differs at byte +6 because two global address registers and their stores are scheduled differently. Reversing the independent C stores and five other qualified compiler routes miss. Reopen with the original initialization idiom or a narrowly qualified route.
 */
extern int D_00114B6C;
extern int D_00114B80;
extern void func_08F6B0(int);
extern void func_016950(int, int);
void func_0AB428(void)
{
    D_00114B6C = 0;
    D_00114B80 = 0;
    func_08F6B0(0);
    func_016950(4, 0);
}