/* LEVEL_09.REL:0x07D718, bounded 60-byte retail body.
 * Pinned C links 68 bytes; first difference at body byte +2.
 * The C models the pair array and counter, but allocates
 * different argument and global registers and lengthens
 * the guarded writes. Reopen with the original pair layout
 * or a qualified compiler/value-lifetime hypothesis.
 */
typedef struct { int first; int second; } Pair;
extern unsigned int D_00222498;
extern Pair D_002224A0[];
void func_07D718(int first, int second)
{
    unsigned int index = D_00222498;
    if (index < 16) {
        D_002224A0[index].second = second;
        D_002224A0[index].first = first;
        D_00222498 = index + 1;
    }
}