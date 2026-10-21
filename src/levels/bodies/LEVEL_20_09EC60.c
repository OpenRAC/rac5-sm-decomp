/* LEVEL_20:0x09EC60 -- copy four floats into the global block. */

typedef struct {
    float f[4];
} F16;

extern F16 D_19D198;

void func_09EC60(F16 *src)
{
    D_19D198 = *src;
}
