/* LEVEL_18:0x068678 -- placement copy of LEVEL_01_077EA8.c: creates an emitter result for the object: copies the object vector, sets scale 1, size and the rate-per-period, and enables it. */
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

extern Result *func_087B48(Local *, Root *, int);

void func_068678(Root *self)
{
    Local local;
    Result *result;
    Param *param = self->param;

    local.flag = -1;
    result = func_087B48(&local, self, 1);
    if (result != 0) {
        result->vector = self->vector;
        result->size = param->size;
        result->scale = 1.0f;
        result->rate = (param->rate * 0.0333333333f) / param->period;
        result->enabled = 1;
    }
}
