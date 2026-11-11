/* LEVEL_08:0x1FB200 -- placement copy of LEVEL_04_1D60A8.c: accepts a query result outright below a distance limit, otherwise randomly by range band. */

extern int rand(void);
extern int func_1FB160(void *a0, float *pos, float *out);

int func_1FB200(void *a0, float *pos, char *skip, char *obj, float *thr)
{
    float res[4];
    int hit;
    float dx;
    float dz;
    float d2;

    hit = func_1FB160(a0, pos, res);
    if (hit == 0) {
        return 0;
    }
    if (res[0] <= thr[0]) {
        return hit;
    }
    dx = pos[0] - *(float *)(obj + 0x30);
    dz = pos[2] - *(float *)(obj + 0x38);
    d2 = dx * dx + dz * dz;
    if (skip != obj) {
        if (res[0] < d2) {
            if ((float)rand() * 4.656612873077393e-10f <= thr[1]) {
                return hit;
            }
        }
    }
    if (thr[3] < d2) {
        if ((float)rand() * 4.656612873077393e-10f <= thr[2]) {
            return hit;
        }
    }
    return 0;
}
