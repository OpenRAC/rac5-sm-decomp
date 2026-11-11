/* LEVEL_04:0x037078 -- store the caller's vector into the global vector at
   0x24F3B0 and keep the second argument in the word just behind it. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

extern struct {
    Vec3 v;
    int flag;
} D_0024F3B0;

void func_037078(Vec3 *src, int flag)
{
    D_0024F3B0.v = *src;
    D_0024F3B0.flag = flag;
}
