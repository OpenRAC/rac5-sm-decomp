/* LEVEL_10.REL:0x173168: reviewed 72-byte candidate.
 * Divides the measured value by the table entry's first component.
 * gnu-ee-trial-divpad C with gnu-ee-trial links 72/72 bytes; first differs at
 * +8.
 * The single-precision division needs the division-padding profile; the index
 * multiplication then lands in a different register, so the address register
 * differs (row arrays, unsigned index and a local entry pointer measured).
 * Retry: Recover the index type or entry layout that reproduces the register
 * choice.
 * No matching credit.
 */
typedef struct {
    float x, y, z;
} Vec3;

extern Vec3 D_0022A4E8[];
extern float func_07D040(void *);

float func_173168(void **obj, int index)
{
    float scale = D_0022A4E8[index].x;

    return func_07D040(*obj) / scale;
}
