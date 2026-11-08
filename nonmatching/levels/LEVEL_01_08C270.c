/* LEVEL_01.REL:0x08C270: reviewed 176-byte candidate.
 * pinned C with gnu-ee-trial links 168 bytes; first differs at +38.
 * Retry: Recover the sequential float load/multiply/stack-spill schedule and full
 * 176-byte extent under a qualified route.
 * No matching credit.
 */
/* LEVEL_01.REL:0x08C270: useful C candidate, no matching credit.
   Reopen when: Recover the sequential float load/multiply/stack-spill schedule and full 176-byte extent under a qualified route. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    float f_00;
    float f_04;
    float f_08;
    float f_0C;
    float f_10;
    float f_14;
    float f_18;
    float f_1C;
    float f_20;
    float f_24;
    float f_28;
} Mat;

extern void func_122ED8(void *object);
extern void func_129048(int zero, Mat *matrix,
                        float x, float y, float z);

void func_08C270(char *object, char *record)
{
    Vec3 delta;
    delta.x = *(float *)(record + 0x20) * 0.00125f;
    delta.y = *(float *)(record + 0x24) * 0.00125f;
    delta.z = *(float *)(record + 0x28) * 0.00125f;
    func_122ED8(object);
    func_129048(0, (Mat *)object,
                *(float *)(record + 0x10),
                *(float *)(record + 0x14),
                *(float *)(record + 0x18));
    *(float *)(object + 0x30) += delta.x;
    *(float *)(object + 0x34) += delta.y;
    *(float *)(object + 0x38) += delta.z;
}
