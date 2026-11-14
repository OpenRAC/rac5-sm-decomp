/* LEVEL_01:0x126078 -- writes the matrix applied to a point, plus the matrix's translation, to the output vector. */
void func_126078(float *out, float *m, float x, float y, float z)
{
    float r0, r1, r2;

    r0 = x * m[0];
    r1 = x * m[1];
    r2 = x * m[2];
    r0 = r0 + y * m[3];
    r1 = r1 + y * m[4];
    r2 = r2 + y * m[5];
    r0 = r0 + z * m[6];
    r1 = r1 + z * m[7];
    r2 = r2 + z * m[8];
    r0 = r0 + m[9];
    r1 = r1 + m[10];
    r2 = r2 + m[11];
    out[0] = r0;
    out[2] = r2;
    out[1] = r1;
}
