/* LEVEL_06:0x160E48 -- gathers two three-float vectors and 0.5f into a
   stack buffer and hands it to func_0E62B8. */
extern void func_0E62B8(void *a0, float *a1, int a2);

void func_160E48(void *a0, float *a1, float *a2)
{
    float buf[8];
    buf[0] = a1[0];
    buf[1] = a1[1];
    buf[2] = a1[2];
    buf[3] = a2[0];
    buf[4] = a2[1];
    buf[5] = a2[2];
    buf[6] = 0.5f;
    buf[7] = 0.0f;
    func_0E62B8(a0, buf, 0);
}
