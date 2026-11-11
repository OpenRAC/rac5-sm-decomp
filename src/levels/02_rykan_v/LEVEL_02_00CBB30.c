/* LEVEL_02:0x0CBB30 -- 16-byte block copy into a global.
   The retail keeps the global's high part in $v0 and materialises the
   address in $a3, then moves two quadwords with ldl/ldr and sdl/sdr. */
typedef struct {
    float f[4];
} F16;

extern F16 D_00342F18;

void func_00CBB30(F16 *src)
{
    D_00342F18 = *src;
}
