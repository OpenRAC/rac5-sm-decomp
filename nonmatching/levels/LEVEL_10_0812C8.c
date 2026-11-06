/* LEVEL_10.REL:0x0812C8, bounded 60-byte retail body.
 * Pinned C links 68 bytes; first difference at body byte +2.
 * The C models the pair array and counter, but allocates
 * different argument and global registers and lengthens
 * the guarded writes. Reopen with the original pair layout
 * or a qualified compiler/value-lifetime hypothesis.
 */
typedef struct { int first; int second; } Pair;
extern unsigned int D_00244118;
extern Pair D_00244120[];
void func_0812C8(int first, int second)
{
    unsigned int index = D_00244118;
    if (index < 16) {
        D_00244120[index].second = second;
        D_00244120[index].first = first;
        D_00244118 = index + 1;
    }
}