/* USA LEVEL_15.REL:0x0F64E8, 164-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 168 linked bytes; first differing word +0x4C.
 * Unaccepted; no matching credit. Recover the matrix/basis aggregate types; scalar vector copies preserve the frame while a retained basis address adds one word.
 */
typedef struct Vec { float x,y,z; } Vec;
extern char D_2A8B5C[];
extern void func_12FDF8(int *object, int value);
extern void func_1300D8(char *matrix, Vec *normal, Vec *other, char *source, char *object);
extern void func_0EBEC0(Vec *up, Vec *left, const Vec *normal);
extern void func_1324A0(char *matrix, char *basis);
void func_0F64E8(void)
{
    char matrix[32];
    float normal[4];
    float other[4];
    Vec basis[3];
    char *source = D_2A8B5C;
    char *base = source - 4;
    char *object = source + 12;
    func_12FDF8((int *)object, *(int *)(base + 0x18));
    func_1300D8(matrix, (Vec *)normal, (Vec *)other, source, object);
    func_0EBEC0(&basis[0], &basis[1], (Vec *)normal);
    basis[2].x = normal[0];
    basis[2].y = normal[1];
    basis[2].z = normal[2];
    func_1324A0(matrix, (char *)basis);
    *(int *)(base + 0x44080) = 0;
}
