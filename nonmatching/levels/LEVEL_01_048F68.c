/* Candidate for LEVEL_01.REL:0x048F68.
 * Builds an orthonormal basis and mirrors sixteen floats to the linked object.
 * Field roles remain provisional.
 * gnu-ee-trial-divpad links 656 bytes against a 696-byte candidate;
 * first difference is at body byte 4. This is not a match.
 */
extern float D_00217E88[3];
extern float sqrtf(float);

void func_048F68(float *object)
{
    float length2;
    float inverse;
    float x;
    float y;
    float z;
    float *other;
    float *axis = object + 8;

    object[9] = 0.0f;
    axis[0] = object[0x80];
    axis[2] = object[0x82];
    axis[3] = 0.0f;
    length2 = axis[0] * axis[0] + axis[1] * axis[1] + axis[2] * axis[2];
    if (!(length2 < 2.3841858e-07f)) {
        inverse = 1.0f / sqrtf(length2);
        axis[0] = axis[0] * inverse;
        axis[1] = axis[1] * inverse;
        axis[2] = axis[2] * inverse;
    }

    x = D_00217E88[1] * axis[2] - D_00217E88[2] * axis[1];
    y = D_00217E88[2] * axis[0] - D_00217E88[0] * axis[2];
    z = D_00217E88[0] * axis[1] - D_00217E88[1] * axis[0];
    object[0] = x;
    object[1] = y;
    object[3] = 0.0f;
    object[2] = z;
    length2 = x * x + y * y + z * z;
    if (!(length2 < 2.3841858e-07f)) {
        inverse = 1.0f / sqrtf(length2);
        object[0] = object[0] * inverse;
        object[2] = object[2] * inverse;
        object[1] = object[1] * inverse;
    }

    object[4] = axis[1] * object[2] - axis[2] * object[1];
    object[5] = axis[2] * object[0] - axis[0] * object[2];
    object[6] = axis[0] * object[1] - axis[1] * object[0];
    object[7] = 0.0f;

    other = *(float **)((char *)object + 0x59C);
    other[8] = axis[0];
    other[9] = axis[1];
    other[10] = axis[2];
    other[11] = axis[3];
    other[0] = object[0];
    other[1] = object[1];
    other[2] = object[2];
    other[3] = object[3];
    other[4] = object[4];
    other[5] = object[5];
    other[6] = object[6];
    other[7] = object[7];
    other[12] = object[12];
    other[13] = object[13];
    other[14] = object[14];
    other[15] = object[15];
}
