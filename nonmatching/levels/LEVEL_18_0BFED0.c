/* LEVEL_18.REL:0x0BFED0, bounded 56-byte retail body.
 * Pinned C links 56 bytes; first difference at body byte +6.
 * The pinned compiler links 56 bytes but first differs at byte +6 because two global address registers and their stores are scheduled differently. Reversing the independent C stores and five other qualified compiler routes miss. Reopen with the original initialization idiom or a narrowly qualified route.
 */
extern int D_001B390C;
extern int D_001B3920;
extern void func_0A40A8(int);
extern void func_0181E0(int, int);
void func_0BFED0(void)
{
    D_001B390C = 0;
    D_001B3920 = 0;
    func_0A40A8(0);
    func_0181E0(4, 0);
}