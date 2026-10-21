/* LEVEL_03:0x033C70 -- store the caller's vector into the global vector at
   0x24FA20 and keep the second argument in the word just behind it. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

extern struct {
    Vec3 v;
    int flag;
} D_0024FA20;

void func_033C70(Vec3 *src, int flag)
{
    D_0024FA20.v = *src;
    D_0024FA20.flag = flag;
}
