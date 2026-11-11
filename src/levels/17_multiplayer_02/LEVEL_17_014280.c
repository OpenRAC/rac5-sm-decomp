/* LEVEL_17:0x014280 -- steps a float down by a delta with a lower clamp, stores it as an 8-bit value in the top byte of a word, and reports whether it hit the clamp. */

int func_18A360(float f);

int func_014280(unsigned int *w, float *v, float lim, float d)
{
    float x;
    unsigned int t;
    int r;

    x = *v - d;
    *v = x;
    if (x < lim) {
        *v = lim;
    }
    t = *w & 0x00FFFFFF;
    r = func_18A360(*v * 254.89999389648438f);
    *w = t | ((unsigned int)r << 24);
    return *v == lim;
}
