/* LEVEL_05:0x0C37C8 -- 16-byte block copy into a global. */
typedef struct {
    float f[4];
} F16;

extern F16 D_003178D8;

void func_00C37C8(F16 *src)
{
    D_003178D8 = *src;
}
