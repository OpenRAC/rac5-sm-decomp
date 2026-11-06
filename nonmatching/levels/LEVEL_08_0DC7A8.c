/* LEVEL_08.REL:0x0DC7A8, bounded 56-byte retail body.
 * Pinned C links 56 bytes; first difference at body byte +6.
 * The pinned compiler links 56 bytes but first differs at byte +6 because two global address registers and their stores are scheduled differently. Reversing the independent C stores and five other qualified compiler routes miss. Reopen with the original initialization idiom or a narrowly qualified route.
 */
extern int D_0024D49C;
extern int D_0024D4B0;
extern void func_0C0F10(int);
extern void func_01B1A0(int, int);
void func_0DC7A8(void)
{
    D_0024D49C = 0;
    D_0024D4B0 = 0;
    func_0C0F10(0);
    func_01B1A0(4, 0);
}