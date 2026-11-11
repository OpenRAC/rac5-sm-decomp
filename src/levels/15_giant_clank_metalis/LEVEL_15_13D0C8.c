/* LEVEL_15:0x13D0C8 -- copy a three-float position into the global.
   The retail copies twelve bytes as a float quadword (ldl/ldr) and then
   repeats the third float as a word: the twelve byte copy of three floats
   is what the compiler emits for a float triple. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

extern Vec3 D_0015E328;

void func_13D0C8(Vec3 *src)
{
    D_0015E328 = *src;
}
