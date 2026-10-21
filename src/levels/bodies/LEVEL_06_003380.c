/* LEVEL_06:0x003380 -- the incoming twelve-byte vector (two floats and a
   flag) is written into the block the global points at, at offset 0x1D8. */
typedef struct {
    float f[2];
    int flag;
} Vec12;

typedef struct {
    char pad000[0x1D8];
    Vec12 vec;
} Block;

extern Block *D_001DE154;

void func_003380(Vec12 *src)
{
    D_001DE154->vec = *src;
}
