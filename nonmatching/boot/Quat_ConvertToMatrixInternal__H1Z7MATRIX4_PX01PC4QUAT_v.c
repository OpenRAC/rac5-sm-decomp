/* USA SCUS_976.15 boot, 0x01E77F00..0x01E77FB8: 184-byte body.
 * Reconstructed from the owner's retail code and the accepted named wrapper.
 * The 240-byte next-label interval also contains a separately called 56-byte
 * static initializer. Those bytes are excluded; this body returns before it.
 * No direct outside branch enters this body's interior. MATRIX4 and QUAT
 * match the wrapper's 16-float/four-float definitions; only the nine rotation
 * coefficients are written here, with no normalization or translation stores.
 * Rebuilt default GNU and gnu-ee-trial, -O2 -G0, default GNU assembler,
 * independent SN links: 184 compiled bytes, 98/184 equal positions, first
 * difference at entry in input-load/register scheduling. Three source forms
 * were bounded: publishing the last diagonal first gives 81/184, first +2;
 * explicitly capturing quaternion components gives the same object; natural
 * matrix row order gives this retained result. No register binding or dummy
 * operation was used. Reopen with evidence for coefficient temporary
 * lifetimes or an independently measured floating-point allocation cause.
 * Not exact; no complete-program gate, promotion or matching credit.
 */
typedef struct { float m[16]; } MATRIX4;
typedef struct { float x, y, z, w; } QUAT;

void Quat_ConvertToMatrixInternal__H1Z7MATRIX4_PX01PC4QUAT_v(MATRIX4 *m, const QUAT *q)
{
    float x = q->x;
    float y = q->y;
    float z = q->z;
    float xx = x * x;
    float w = q->w;
    float yy = y * y;
    float zz = z * z;
    float xw = x * w;
    float zw = z * w;
    float xy = x * y;
    float yw = y * w;
    float xz = x * z;
    float yz = y * z;
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
