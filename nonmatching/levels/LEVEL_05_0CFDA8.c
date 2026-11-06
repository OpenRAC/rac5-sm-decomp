/* LEVEL_05.REL:0x0CFDA8, bounded 56-byte retail body.
 * Pinned C links 56 bytes; first difference at body byte +6.
 * The pinned compiler links 56 bytes but first differs at byte +6 because two global address registers and their stores are scheduled differently. Reversing the independent C stores and five other qualified compiler routes miss. Reopen with the original initialization idiom or a narrowly qualified route.
 */
extern int D_001F395C;
extern int D_001F3970;
extern void func_0B45C8(int);
extern void func_019DC0(int, int);
void func_0CFDA8(void)
{
    D_001F395C = 0;
    D_001F3970 = 0;
    func_0B45C8(0);
    func_019DC0(4, 0);
}