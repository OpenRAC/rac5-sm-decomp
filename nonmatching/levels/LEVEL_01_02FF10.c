/* LEVEL_01.REL:0x02FF10: reviewed 172-byte candidate, held for ABI review.
 * Dispatches on a mode byte stored in the object; mode 2 may latch a flag.
 * pinned C with gnu-ee-trial links 172/172 bytes and is byte-exact at this and
 * 5 other USA placements, but the prototypes disagree.
 * It defines the function returning int with (pointer, pointer, int, pointer),
 * but the accepted caller LEVEL_01_02FE68.c declares it returning int with
 * (pointer, pointer, pointer, pointer, int, float).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int func_030180(char *o, void *a1, int a2, char *a3);
extern int func_030518(char *o, void *a1, int a2, char *a3);
extern float func_07CA90(void *a0);

unsigned int func_02FF10(char *o, void *a1, int a2, char *a3)
{
    unsigned int m;
    float v;

    m = (unsigned char)o[0x29];
    if (m == 0 || m == 3) {
        return func_030180(o, a1, a2, a3);
    }
    if (m == 1) {
        return func_030518(o, a1, a2, a3);
    }
    if (m == 2) {
        v = func_07CA90(a1);
        if (*(float *)(a3 + 0x28) <= v) {
            o[0x29] = 1;
        }
        return 1;
    }
    return -1;
}
