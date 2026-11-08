/* LEVEL_02.REL:0x0A6AA0: reviewed 72-byte candidate.
 * pinned C with gnu-ee-trial links 68 bytes; first differs at +2.
 * Retry: Recover the two indexed address multiplications and their live ranges for
 * the float slot; current C links 68/72 with first register difference +2 under the
 * pinned compiler.
 * No matching credit.
 */
extern float D_002B3B98[];

void func_0A6AA0(float value, int index)
{
    float candidate[4];
    float *selected;
    candidate[0] = value;
    selected = &D_002B3B98[index * 0x47];
    if (D_002B3B98[index * 0x47] < value)
        selected = candidate;
    D_002B3B98[index * 0x47] = *selected;
}
