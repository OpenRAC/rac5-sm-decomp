/* LEVEL_21.REL:0x065748, bounded 60-byte retail body.
 * Pinned C links 68 bytes; first difference at body byte +2.
 * The C models the pair array and counter, but allocates
 * different argument and global registers and lengthens
 * the guarded writes. Reopen with the original pair layout
 * or a qualified compiler/value-lifetime hypothesis.
 */
typedef struct { int first; int second; } Pair;
extern unsigned int D_00182D80;
extern Pair D_00182D88[];
void func_065748(int first, int second)
{
    unsigned int index = D_00182D80;
    if (index < 16) {
        D_00182D88[index].second = second;
        D_00182D88[index].first = first;
        D_00182D80 = index + 1;
    }
}