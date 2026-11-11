/* LEVEL_02:0x03A478 -- drop a position and a facing angle in the player
   global.  The position is a three-float copy (the retail emits it as a
   float quadword plus the third float as a word); the facing is an int. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    Vec3 pos;
    int facing;
} Player;

extern Player D_24C0B0;

void func_03A478(Vec3 *src, int facing)
{
    D_24C0B0.pos = *src;
    D_24C0B0.facing = facing;
}
