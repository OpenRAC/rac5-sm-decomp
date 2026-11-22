/* LEVEL_23:0x089AB8 -- placement copy of LEVEL_01_094098.c: advances every material record's scrolling texture coordinates by a step, wrapping them into -1..1. */
typedef unsigned int u32;

extern u32 D_001C97CC;
extern void *D_00269580[];
extern unsigned char g_MaterialHasBloomedThisFrame;

void func_089AB8(float step)
{
    u32 outer = 0;
    g_MaterialHasBloomedThisFrame = 0;
    if (D_001C97CC != 0) {
        do {
            char *record = (char *)D_00269580[outer];
            u32 next = outer + 1;
            u32 inner = 0;
            if (*(u32 *)(record + 0x6c) != 0) {
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
        } while (outer < D_001C97CC);
    }
}
