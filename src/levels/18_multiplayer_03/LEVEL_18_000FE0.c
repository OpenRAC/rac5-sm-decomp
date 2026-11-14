/* LEVEL_18:0x000FE0 -- placement copy of LEVEL_16_000F70.c: copies a record's float to one output, converts the record's second float into another when it is zero, and returns the record's first word. */
typedef struct {
    int w0;
    float f4;
    float f8;
} Rec;

extern float func_06EA70(float f);

int func_000FE0(float *a, float *b, int unused, Rec *r)
{
    *b = r->f8;
    if (r->f4 == 0.0f)
        *a = func_06EA70(r->f8);
    else
        *a = r->f4;
    return r->w0;
}
