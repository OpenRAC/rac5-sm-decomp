/* USA SCUS_976.15 boot, 0x01E77F00..0x01E77FB8: 184-byte body.
 * Adapted from this repository's accepted LEVEL_06_119B10.c. Its explicit
 * nine-product order and input snapshot are retained; the packed MATRIX3
 * output is mapped to the measured four-float MATRIX4 row/column stride.
 * Independent SN links reproduce all 184 body bytes under rebuilt default
 * GNU and gnu-ee-trial, -O2 -G0, default GNU assembler. This supersedes the
 * earlier 98/184 attempt without changing the compiler or adding C tricks.
 * The 240-byte next-label interval also contains a separately called 56-byte
 * static initializer. It is excluded and remains in the assembly baseline.
 * The accepted wrapper corroborates the 16-float matrix and four-float
 * quaternion definitions and fills the other seven matrix slots itself.
 * All quaternion components are captured before output stores; no restrict
 * or disjointness requirement is added. Valid readable/writable storage,
 * alignment and C object-lifetime/effective-type obligations still apply.
 * This body evaluates the original polynomial without normalization; no
 * unit-norm input invariant or universal indirect-entry proof is claimed.
 * Local exactness with rebuilt tools is not qualification or promotion.
 * No new complete-program gate or C matching credit is claimed here.
 */
typedef struct { float m[16]; } MATRIX4;
typedef struct { float x, y, z, w; } QUAT;

void Quat_ConvertToMatrixInternal__H1Z7MATRIX4_PX01PC4QUAT_v(MATRIX4 *m, const QUAT *q)
{
    float x = q->x;
    float y = q->y;
    float z = q->z;
    float w = q->w;
    float xx = x * x;
    float yy = y * y;
    float zz = z * z;
    float xy = x * y;
    float xz = x * z;
    float xw = x * w;
    float yz = y * z;
    float yw = y * w;
    float zw = z * w;

    m->m[0] = 1.0f - 2.0f * (yy + zz);
    m->m[1] = 2.0f * (xy + zw);
    m->m[2] = 2.0f * (xz - yw);
    m->m[4] = 2.0f * (xy - zw);
    m->m[5] = 1.0f - 2.0f * (xx + zz);
    m->m[6] = 2.0f * (yz + xw);
    m->m[8] = 2.0f * (xz + yw);
    m->m[9] = 2.0f * (yz - xw);
    m->m[10] = 1.0f - 2.0f * (xx + yy);
}
