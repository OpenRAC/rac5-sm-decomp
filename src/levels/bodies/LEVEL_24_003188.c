/* LEVEL_24:0x003188 -- copies a three-float vector from the argument into the
   vector kept at offset 0x1D8 of the block the global pointer points to. */
typedef struct {
    float f[3];
} Vec3;

typedef struct {
    char pad[0x1D8];
    Vec3 v;
} Block;

extern char D_001BFED4[];

void func_003188(Vec3 *src)
{
    Block *block = *(Block **)D_001BFED4;

    block->v = *src;
}
