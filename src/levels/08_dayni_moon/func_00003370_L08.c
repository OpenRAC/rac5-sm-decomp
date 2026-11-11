/* D_00237DD4 field 0x1A4 */
extern char *D_00237DD4;
void func_00003370(float *v) {
    float *d = (float *)(D_00237DD4 + 0x1A4);
    d[0] += v[0];
    d[1] += v[1];
    d[2] += v[2];
}
