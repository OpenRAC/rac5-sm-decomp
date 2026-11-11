/* D_001DE148 field 0x30 */
extern char *D_001DE148;
void func_00001168(float *v) {
    float *d = (float *)(D_001DE148 + 0x30);
    d[0] += v[0];
    d[1] += v[1];
    d[2] += v[2];
}
