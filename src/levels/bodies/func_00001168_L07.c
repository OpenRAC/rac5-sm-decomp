/* D_00203548 field 0x30 */
extern char *D_00203548;
void func_00001168(float *v) {
    float *d = (float *)(D_00203548 + 0x30);
    d[0] += v[0];
    d[1] += v[1];
    d[2] += v[2];
}
