/* LEVEL_24.REL:0x07B378, bounded 60-byte retail body.
 * Pinned C links 68 bytes; first difference at body byte +2.
 * The C models the pair array and counter, but allocates
 * different argument and global registers and lengthens
 * the guarded writes. Reopen with the original pair layout
 * or a qualified compiler/value-lifetime hypothesis.
 */
typedef struct { int first; int second; } Pair;
extern unsigned int D_00206C18;
extern Pair D_00206C20[];
void func_07B378(int first, int second)
{
    unsigned int index = D_00206C18;
    if (index < 16) {
        D_00206C20[index].second = second;
        D_00206C20[index].first = first;
        D_00206C18 = index + 1;
    }
}