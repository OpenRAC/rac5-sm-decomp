/* LEVEL_15:0x02B410 -- store the caller's vector into the global vector at
   0x17CD20 and keep the second argument in the word just behind it. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

extern struct {
    Vec3 v;
    int flag;
} D_0017CD20;

void func_02B410(Vec3 *src, int flag)
{
    D_0017CD20.v = *src;
    D_0017CD20.flag = flag;
}
