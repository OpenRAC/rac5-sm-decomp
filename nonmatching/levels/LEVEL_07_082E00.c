/* LEVEL_07.REL:0x082E00, bounded 60-byte retail body.
 * Pinned C links 68 bytes; first difference at body byte +2.
 * The C models the pair array and counter, but allocates
 * different argument and global registers and lengthens
 * the guarded writes. Reopen with the original pair layout
 * or a qualified compiler/value-lifetime hypothesis.
 */
typedef struct { int first; int second; } Pair;
extern unsigned int D_00250618;
extern Pair D_00250620[];
void func_082E00(int first, int second)
{
    unsigned int index = D_00250618;
    if (index < 16) {
        D_00250620[index].second = second;
        D_00250620[index].first = first;
        D_00250618 = index + 1;
    }
}