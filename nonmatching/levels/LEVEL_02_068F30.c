/* LEVEL_02.REL:0x068F30: reviewed 152-byte candidate.
 * pinned C with gnu-ee-trial links 152 bytes; first differs at +58.
 * Retry: Revisit the source live ranges so the global base uses the retail register
 * and the stack output load stays after the three field copies.
 * No matching credit.
 */
extern int func_04EBB0(float, float, void *, float *, int, float *, int);
extern char D_00250668[];

void func_068F30(char *record)
{
    float output[20];
    float *destination;
    float *source;
    if (func_04EBB0(0.5f, 0.75f, record, &output[16], 0, &output[17], 0) == 0) {
        destination = (float *)(record + 0x30);
        source = (float *)(record + 0x344);
        destination[0] = source[0];
        destination[1] = source[1];
        destination[2] = source[2];
        *(float *)(record + 0x2e0) = output[16];
    } else {
        *(float *)(D_00250668 + 0x28) = 5.0001f;
        *(int *)(D_00250668 + 0x20) = 3;
        *(int *)(record + 0x1b8) = 0;
    }
}
