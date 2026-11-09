/* LEVEL_08:0x1F51B0 -- derives a sine-like value from cosf and sqrtf, then calls a helper with two output pointers. */
extern float cosf(float x);
extern float sqrtf(float x);
extern int func_13A840(void *a, void *b, void *c, void *d, float e, float f);

int func_1F51B0(int handle, float x)
{
    char *o = (char *)handle;
    float c;
    float s;

    c = cosf(x);
    s = sqrtf(1.0f - c * c);
    if (x < 0.0f) {
        s = -s;
    }
    return func_13A840(o + 0x10, o + 0x20, o + 0x10, o + 0x20, s, c);
}
