/* LEVEL_07.REL:0x0D3860, bounded 56-byte retail body.
 * Pinned C links 56 bytes; first difference at body byte +6.
 * The pinned compiler links 56 bytes but first differs at byte +6 because two global address registers and their stores are scheduled differently. Reversing the independent C stores and five other qualified compiler routes miss. Reopen with the original initialization idiom or a narrowly qualified route.
 */
extern int D_002188DC;
extern int D_002188F0;
extern void func_0B8080(int);
extern void func_01AEE8(int, int);
void func_0D3860(void)
{
    D_002188DC = 0;
    D_002188F0 = 0;
    func_0B8080(0);
    func_01AEE8(4, 0);
}