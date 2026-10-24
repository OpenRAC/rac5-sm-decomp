/* LEVEL_01.REL:0x125F30 -- applies the 3x4 affine frame to a run of
   three-float points, `count` of them. */
void func_125F30(float *out, float *m, float *in, int count)
{
    float m00 = m[0];
    float m01 = m[1];
    float m02 = m[2];
    float m10 = m[4];
    float m11 = m[5];
    float m12 = m[6];
    float m20 = m[8];
    float m21 = m[9];
    float m22 = m[10];
    float m30 = m[12];
    float m31 = m[13];
    float m32 = m[14];

    if (count > 0) {
        do {
            float x = in[0];
            float y = in[1];
            float z = in[2];
            float ox = x * m00 + y * m10 + z * m20 + m30;
            float oy = x * m01 + y * m11 + z * m21 + m31;
            float oz = x * m02 + y * m12 + z * m22 + m32;

            in += 3;
            out[0] = ox;
            out[1] = oy;
            out[2] = oz;
            out += 3;
        } while (--count != 0);
    }
}
