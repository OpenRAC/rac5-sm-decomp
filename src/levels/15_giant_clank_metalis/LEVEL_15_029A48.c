/* LEVEL_15:0x029A48 -- expands the 3x3 basis and the origin into a 4x4
   matrix and hands it to the drawer. */
extern void func_082178(void *a0, int a1, float *m, int a3);

void func_029A48(void *a0, float *m, float *t)
{
    float buf[16];

    buf[0] = m[0];
    buf[1] = m[1];
    buf[2] = m[2];
    buf[3] = 0;
    buf[4] = m[3];
    buf[5] = m[4];
    buf[6] = m[5];
    buf[7] = 0;
    buf[8] = m[6];
    buf[9] = m[7];
    buf[10] = m[8];
    buf[11] = 0;
    buf[12] = t[0];
    buf[13] = t[1];
    buf[14] = t[2];
    buf[15] = 1.0f;
    func_082178(a0, 2, buf, 1);
}
