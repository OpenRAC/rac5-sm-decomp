/* D_001DE154 field 0x1A4 */
extern char *D_001DE154;
void func_00003340(float *v) {
    float *d = (float *)(D_001DE154 + 0x1A4);
    d[0] += v[0];
    d[1] += v[1];
    d[2] += v[2];
}
