/* LEVEL_01:0x035A30 -- the incoming vector lands in the global block, and
   the second argument is stored right behind it. */
typedef struct {
    float f[2];
    int flag;
} Vec12;

typedef struct {
    Vec12 vec;
    int extra;
} Block;

extern Block D_00234BA0;

void func_035A30(Vec12 *src, int extra)
{
    D_00234BA0.vec = *src;
    D_00234BA0.extra = extra;
}
