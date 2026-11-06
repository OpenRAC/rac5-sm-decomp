/* LEVEL_02.REL:0x087518, bounded 60-byte retail body.
 * Pinned C links 68 bytes; first difference at body byte +2.
 * The C models the pair array and counter, but allocates
 * different argument and global registers and lengthens
 * the guarded writes. Reopen with the original pair layout
 * or a qualified compiler/value-lifetime hypothesis.
 */
typedef struct { int first; int second; } Pair;
extern unsigned int D_00252228;
extern Pair D_00252230[];
void func_087518(int first, int second)
{
    unsigned int index = D_00252228;
    if (index < 16) {
        D_00252230[index].second = second;
        D_00252230[index].first = first;
        D_00252228 = index + 1;
    }
}