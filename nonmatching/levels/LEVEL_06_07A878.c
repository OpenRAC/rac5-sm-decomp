/* LEVEL_06.REL:0x07A878, bounded 60-byte retail body.
 * Pinned C links 68 bytes; first difference at body byte +2.
 * The C models the pair array and counter, but allocates
 * different argument and global registers and lengthens
 * the guarded writes. Reopen with the original pair layout
 * or a qualified compiler/value-lifetime hypothesis.
 */
typedef struct { int first; int second; } Pair;
extern unsigned int D_00227A98;
extern Pair D_00227AA0[];
void func_07A878(int first, int second)
{
    unsigned int index = D_00227A98;
    if (index < 16) {
        D_00227AA0[index].second = second;
        D_00227AA0[index].first = first;
        D_00227A98 = index + 1;
    }
}