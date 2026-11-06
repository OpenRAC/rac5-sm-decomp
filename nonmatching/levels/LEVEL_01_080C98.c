/* LEVEL_01.REL:0x080C98, bounded 60-byte retail body.
 * Pinned C links 68 bytes; first difference at body byte +2.
 * The C models the pair array and counter, but allocates
 * different argument and global registers and lengthens
 * the guarded writes. Reopen with the original pair layout
 * or a qualified compiler/value-lifetime hypothesis.
 */
typedef struct { int first; int second; } Pair;
extern unsigned int D_0023AD18;
extern Pair D_0023AD20[];
void func_080C98(int first, int second)
{
    unsigned int index = D_0023AD18;
    if (index < 16) {
        D_0023AD20[index].second = second;
        D_0023AD20[index].first = first;
        D_0023AD18 = index + 1;
    }
}