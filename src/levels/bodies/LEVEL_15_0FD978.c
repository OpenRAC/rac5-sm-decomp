/* LEVEL_15:0x0FD978 -- the speed of the target is scaled, then the two
   incoming vectors are copied into the target block. */
typedef struct {
    float f[2];
    int flag;
} Vec12;

typedef struct {
    float f[2];
    float speed;
    Vec12 a;
    Vec12 b;
} Target;

void func_0FD978(Target *dst, Vec12 *a, Vec12 *b, float scale)
{
    dst->speed += scale * 30.0f;
    dst->a = *a;
    dst->b = *b;
}
