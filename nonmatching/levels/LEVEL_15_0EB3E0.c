/* LEVEL_15.REL:0x0EB3E0: reviewed 172-byte candidate, held for ABI review.
 * Writes the inverse of a rigid rotation-plus-translation matrix: transposed
 * 3x3 block and negated rotated translation.
 * pinned C with gnu-ee-trial links 172/172 bytes and is byte-exact at this and
 * 3 other USA placements, but the prototypes disagree.
 * Another placement of the same form conflicts with an accepted prototype, so
 * the whole form is held.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    float f_00;
    float f_04;
    float f_08;
    char pad_0C[4];
    float f_10;
    float f_14;
    float f_18;
    char pad_1C[4];
    float f_20;
    float f_24;
    float f_28;
    char pad_2C[4];
    float f_30;
    float f_34;
    float f_38;
} Mat;

void func_0EB3E0(Mat *a0, Mat *a1)
{
    float m00;
    float m01;
    float m02;
    float m10;
    float m11;
    float m12;
    float m20;
    float m21;
    float m22;
    float t0;
    float t1;
    float t2;

    m00 = a1->f_00;
    m01 = a1->f_04;
    m02 = a1->f_08;
    m10 = a1->f_10;
    m11 = a1->f_14;
    m12 = a1->f_18;
    m20 = a1->f_20;
    m21 = a1->f_24;
    m22 = a1->f_28;
    a0->f_00 = m00;
    a0->f_04 = m10;
    a0->f_08 = m20;
    a0->f_10 = m01;
    a0->f_14 = m11;
    a0->f_18 = m21;
    a0->f_20 = m02;
    a0->f_24 = m12;
    a0->f_28 = m22;
    t0 = a1->f_30;
    t1 = a1->f_34;
    t2 = a1->f_38;
    a0->f_30 = (-m00 * t0 - m01 * t1) - m02 * t2;
    a0->f_34 = (-m10 * t0 - m11 * t1) - m12 * t2;
    a0->f_38 = (-m20 * t0 - m21 * t1) - m22 * t2;
}
