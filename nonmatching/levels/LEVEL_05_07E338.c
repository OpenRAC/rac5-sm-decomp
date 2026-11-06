/* LEVEL_05.REL:0x07E338, bounded 60-byte retail body.
 * Pinned C links 68 bytes; first difference at body byte +2.
 * The C models the pair array and counter, but allocates
 * different argument and global registers and lengthens
 * the guarded writes. Reopen with the original pair layout
 * or a qualified compiler/value-lifetime hypothesis.
 */
typedef struct { int first; int second; } Pair;
extern unsigned int D_00226BD8;
extern Pair D_00226BE0[];
void func_07E338(int first, int second)
{
    unsigned int index = D_00226BD8;
    if (index < 16) {
        D_00226BE0[index].second = second;
        D_00226BE0[index].first = first;
        D_00226BD8 = index + 1;
    }
}