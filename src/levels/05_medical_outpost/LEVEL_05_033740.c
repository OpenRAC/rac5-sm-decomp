/* LEVEL_05.REL 0x033740 -- a twelve-byte float triple copied into a global,
   and a flag written in the same global, one word further on. */
typedef struct {
    float f[3];
} Vec3;

typedef struct {
    Vec3 vec;
    int flag;
} Global;

extern Global D_2208A0;

void func(Vec3 *src, int flag)
{
    D_2208A0.vec = *src;
    D_2208A0.flag = flag;
}
