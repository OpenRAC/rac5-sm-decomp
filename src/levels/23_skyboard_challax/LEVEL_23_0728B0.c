/* LEVEL_23:0x0728B0 -- placement copy of LEVEL_22_06DF98.c: tests whether a box given as six floats (min x/y/z, max x/y/z) is visible: builds its eight corner points into a global table and checks them against the six frustum planes, returning 0 as soon as one plane has no corner in front of it, 1 otherwise (0 when there is no frustum). */
typedef struct Plane {
    float a;
    float b;
    float c;
    float d;
} Plane;

typedef struct Frustum {
    char pad_00[0x60];
    Plane planes[6];
} Frustum;

extern Frustum *D_001C9540;
extern float D_00207CB0[24];

int func_0728B0(float *box)
{
    Frustum *fr = D_001C9540;
    float *corner = D_00207CB0;
    int inside;
    unsigned int i;
    unsigned int k;

    if (fr == 0 || corner == 0)
        return 0;
    corner[0] = box[0];
    corner[1] = box[1];
    corner[2] = box[2];
    corner[3] = box[3];
    corner[4] = box[1];
    corner[5] = box[2];
    corner[6] = box[3];
    corner[7] = box[1];
    corner[8] = box[5];
    corner[9] = box[0];
    corner[10] = box[1];
    corner[11] = box[5];
    corner[12] = box[0];
    corner[13] = box[4];
    corner[14] = box[2];
    corner[15] = box[3];
    corner[16] = box[4];
    corner[17] = box[2];
    corner[18] = box[3];
    corner[19] = box[4];
    corner[20] = box[5];
    corner[21] = box[0];
    corner[22] = box[4];
    corner[23] = box[5];
    for (k = 0; k < 6; k++) {
        inside = 0;
        for (i = 0; i < 8; i++) {
            if (fr->planes[k].a * corner[3 * i] + fr->planes[k].b * corner[3 * i + 1] + fr->planes[k].c * corner[3 * i + 2] + fr->planes[k].d > 0.0f)
                inside++;
        }
        if (inside == 0)
            return 0;
    }
    return 1;
}
