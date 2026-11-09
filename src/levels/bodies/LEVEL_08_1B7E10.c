/* LEVEL_08:0x1B7E10 -- when a range test fails, tests distance to a stored point and reports a hit. */

extern float D_0026F558[];
extern float D_002704C8;
extern float D_0026F564;

int func_1B7AD0(void *a);

void func_1B7E10(char *a0)
{
    float *g;
    float sum;
    float dx;
    float dz;
    float d;
    float rr;

    g = D_0026F558;
    sum = g[1] + D_002704C8;
    if (sum <= *(float *)(a0 + 0x34)) {
        return;
    }
    dx = g[0] - *(float *)(a0 + 0x30);
    dz = g[2] - *(float *)(a0 + 0x38);
    rr = D_0026F564 * D_0026F564;
    d = dx * dx + dz * dz;
    if (rr < d) {
        return;
    }
    *(float *)(a0 + 0x34) = sum;
    if (func_1B7AD0(a0) != 0) {
        *(unsigned char *)(a0 + 0x45) = 1;
    }
}
