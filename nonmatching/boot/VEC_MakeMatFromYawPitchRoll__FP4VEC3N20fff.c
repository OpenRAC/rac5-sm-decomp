/* USA SCUS_976.15 boot: VEC_MakeMatFromYawPitchRoll__FP4VEC3N20fff,
 * 0x01E77740..0x01E77810, observed 208-byte body with no trailing padding.
 * Adapted from this repository's accepted LEVEL_15 source after independently
 * checking all three named boot callees, floating arguments and matrix size.
 * Measured 14 November 2026: 208/208 body bytes exact after independent SN
 * linking under rebuilt gnu-ee-trial -O2 -G0 with the default GNU assembler.
 * gnu-ee-trial-divpad produces the same object; this body has no division.
 * The rebuilt default GNU route is 208 bytes, 176 equal positions, first
 * difference at +4 in the general/floating register save order.
 * MATRIX3 is nine floats (36 bytes); VEC3 is three floats (12 bytes). The
 * union provides the same matrix storage as three vector rows, without
 * assuming a fourth matrix row from the stack slot's rounded allocation.
 * The first constructor uses z, the second uses x and y, then the accepted
 * matrix multiply writes the product before the three row copies occur.
 * This is an unaccepted local witness: complete-program integration, semantic
 * boundary review and tool qualification remain separate. No C credit.
 */
typedef struct {
    float x;
    float y;
    float z;
} VEC3;

typedef struct {
    float m[9];
} MATRIX3;

typedef union {
    MATRIX3 matrix;
    VEC3 rows[3];
} Matrix3View;

typedef char VEC3_size_check[sizeof(VEC3) == 12 ? 1 : -1];
typedef char MATRIX3_size_check[sizeof(MATRIX3) == 36 ? 1 : -1];

extern void VEC_ConstructRotZMat3__FP7MATRIX3f(MATRIX3 *matrix, float angle);
extern void VEC_MakeMat3FromYawPitch__FP7MATRIX3ff(float *matrix, float first, float second);
extern void VEC_MultiplyMatrix3__FP7MATRIX3PC7MATRIX3T1(MATRIX3 *out, const MATRIX3 *a, const MATRIX3 *b);

void VEC_MakeMatFromYawPitchRoll__FP4VEC3N20fff(VEC3 *a, VEC3 *b, VEC3 *c,
                                             float x, float y, float z) {
    Matrix3View m1;
    Matrix3View m2;
    Matrix3View m3;

    VEC_ConstructRotZMat3__FP7MATRIX3f(&m1.matrix, z);
    VEC_MakeMat3FromYawPitch__FP7MATRIX3ff(m2.matrix.m, x, y);
    VEC_MultiplyMatrix3__FP7MATRIX3PC7MATRIX3T1(&m3.matrix, &m1.matrix, &m2.matrix);
    *a = m3.rows[0];
    *b = m3.rows[1];
    *c = m3.rows[2];
}
