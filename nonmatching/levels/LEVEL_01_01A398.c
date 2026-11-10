/* USA LEVEL_01.REL:0x01A398. Retained C hypothesis, not a match.
 * The pinned profile links 236 bytes against a 244-byte candidate body;
 * the first difference is at body byte 6. See docs/contributing/matching-blockers.md. */
extern float D_00217E78[];
extern float D_00217DC0[];
extern float D_00217E98[];
extern float D_0022FB60[];

void func_01A398(void) {
    float *first = D_00217E78;
    float *matrix = D_00217DC0;
    float *tail = D_00217E98;
    float *dst = D_0022FB60;
    dst[0] = first[0];
    dst[1] = first[1];
    dst[2] = first[2];
    dst[3] = first[3];
    dst[4] = matrix[0];
    dst[5] = matrix[1];
    dst[6] = matrix[2];
    dst[7] = matrix[3];
    dst[8] = matrix[4];
    dst[9] = matrix[5];
    dst[10] = matrix[6];
    dst[11] = matrix[7];
    dst[12] = matrix[8];
    dst[13] = matrix[9];
    dst[14] = matrix[10];
    dst[15] = matrix[11];
    dst[16] = matrix[12];
    dst[17] = matrix[13];
    dst[18] = matrix[14];
    dst[19] = matrix[15];
    dst[20] = tail[0];
    dst[21] = tail[1];
    dst[22] = tail[2];
    dst[23] = tail[3];
    ((int *)dst)[24] = 0;
    ((int *)dst)[25] = 0;
}
