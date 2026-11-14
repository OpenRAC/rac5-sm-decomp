/* LEVEL_17:0x000F70 -- placement copy of LEVEL_16_000F70.c: copies a record's float to one output, converts the record's second float into another when it is zero, and returns the record's first word. */
typedef struct {
    int w0;
    float f4;
    float f8;
} Rec;

extern float func_06F9E0(float f);

int func_000F70(float *a, float *b, int unused, Rec *r)
{
    *b = r->f8;
    if (r->f4 == 0.0f)
        *a = func_06F9E0(r->f8);
    else
        *a = r->f4;
    return r->w0;
}
