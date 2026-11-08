/* LEVEL_01.REL:0x077EA8: reviewed 172-byte candidate.
 * gnu-ee-trial-divpad C with gnu-ee-trial links 168 bytes; first differs at +52.
 * Retry: Recover the branch-likely exit and vector/float store schedule under the
 * qualified division-padding profile.
 * No matching credit.
 */
typedef struct Vec3 {
    float x;
    float y;
    int index;
} Vec3;

typedef struct Param {
    char pad_00[8];
    float size;
    float rate;
    float period;
} Param;

typedef struct Root {
    char pad_00[0x14];
    Param *param;
    char pad_18[0x0C];
    Vec3 vector;
} Root;

typedef struct Result {
    Vec3 vector;
    float scale;
    float rate;
    float size;
    char enabled;
} Result;

typedef struct Local {
    int flag;
} Local;

extern Result *func_097690(Local *, Root *, int);

void func_077EA8(Root *self)
{
    Local local;
    Result *result;
    Param *param = self->param;

    local.flag = -1;
    result = func_097690(&local, self, 1);
    if (result == 0)
        return;
    result->vector = self->vector;
    result->scale = 1.0f;
    result->size = param->size;
    result->rate = (param->rate * 0.0333333333f) / param->period;
    result->enabled = 1;
}
