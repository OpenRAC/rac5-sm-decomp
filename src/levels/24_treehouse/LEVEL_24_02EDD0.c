/* LEVEL_24:0x02EDD0 -- drop a position and a facing angle in the global.
   The position is a three-float copy (the retail emits it as a float
   quadword plus the third float as a word); the facing is an int. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    Vec3 pos;
    int facing;
} Player;

extern Player D_200AA0;

void func_02EDD0(Vec3 *src, int facing)
{
    D_200AA0.pos = *src;
    D_200AA0.facing = facing;
}
