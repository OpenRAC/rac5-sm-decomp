/* D_00203554 field 0x1A4 */
extern char *D_00203554;
void func_00003340(float *v) {
    float *d = (float *)(D_00203554 + 0x1A4);
    d[0] += v[0];
    d[1] += v[1];
    d[2] += v[2];
}
