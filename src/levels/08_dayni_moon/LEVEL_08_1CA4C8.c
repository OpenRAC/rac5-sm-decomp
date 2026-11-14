/* LEVEL_08:0x1CA4C8 -- rotates the object's two vectors by a fixed angle (cosine and its sine-like partner) and refreshes the attached record. */
extern float cosf(float x);
extern float sqrtf(float x);
extern int func_13A840(void *a, void *b, void *c, void *d, float e, float f);
extern void func_2200D8(char *record);

void func_1CA4C8(char *o)
{
    char *rec = *(char **)(o + 0x58);
    float c;
    float s;

    c = cosf(0.2617993950843811f);
    s = sqrtf(1.0f - c * c);
    func_13A840(o + 0x10, o + 0x20, o + 0x10, o + 0x20, s, c);
    func_2200D8(rec + 8);
}
