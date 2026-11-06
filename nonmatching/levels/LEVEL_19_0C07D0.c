/* LEVEL_19.REL:0x0C07D0, bounded 56-byte retail body.
 * Pinned C links 56 bytes; first difference at body byte +6.
 * The pinned compiler links 56 bytes but first differs at byte +6 because two global address registers and their stores are scheduled differently. Reversing the independent C stores and five other qualified compiler routes miss. Reopen with the original initialization idiom or a narrowly qualified route.
 */
extern int D_001B360C;
extern int D_001B3620;
extern void func_0A4928(int);
extern void func_018898(int, int);
void func_0C07D0(void)
{
    D_001B360C = 0;
    D_001B3620 = 0;
    func_0A4928(0);
    func_018898(4, 0);
}