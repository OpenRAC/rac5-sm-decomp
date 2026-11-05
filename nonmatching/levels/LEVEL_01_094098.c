/* USA LEVEL_01.REL:0x094098. Retained C hypothesis, not a match.
 * Pinned GNU EE links 280 bytes against 280 retail bytes; first difference
 * at body byte 37. All 20 structural placements were measured separately. */
typedef unsigned int u32;

extern u32 D_001F63CC;
extern void *D_00298140[];
extern unsigned char g_MaterialHasBloomedThisFrame;

void func_094098(float step)
{
    u32 outer = 0;
    g_MaterialHasBloomedThisFrame = 0;
    if (D_001F63CC != 0) {
        do {
            char *record = (char *)D_00298140[outer];
            u32 next = outer + 1;
            if (*(u32 *)(record + 0x6c) != 0) {
                u32 inner = 0;
                float *point = (float *)(record + 0x98);
                do {
                    float x = point[-1] + point[1] * step;
                    float y = point[0] + point[2] * step;
                    point[-1] = x;
                    point[0] = y;
                    if (point[-1] > 1.0f) point[-1] -= 1.0f;
                    if (point[-1] < -1.0f) point[-1] += 1.0f;
                    if (point[0] > 1.0f) point[0] -= 1.0f;
                    if (point[0] < -1.0f) point[0] += 1.0f;
                    inner++;
                    point = (float *)((char *)point + 0x3c);
                } while (inner < *(u32 *)(record + 0x6c));
            }
            outer = next;
        } while (outer < D_001F63CC);
    }
}
