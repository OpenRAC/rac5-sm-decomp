/* LEVEL_03.REL:0x080A78, bounded 60-byte retail body.
 * Pinned C links 68 bytes; first difference at body byte +2.
 * The C models the pair array and counter, but allocates
 * different argument and global registers and lengthens
 * the guarded writes. Reopen with the original pair layout
 * or a qualified compiler/value-lifetime hypothesis.
 */
typedef struct { int first; int second; } Pair;
extern unsigned int D_00255B98;
extern Pair D_00255BA0[];
void func_080A78(int first, int second)
{
    unsigned int index = D_00255B98;
    if (index < 16) {
        D_00255BA0[index].second = second;
        D_00255BA0[index].first = first;
        D_00255B98 = index + 1;
    }
}