/* LEVEL_04:0x1C6470 -- on id 0xFFFF with a non-null arg, resets one vector block and fills two others from a scale. */
struct Blk {
    float a;
    float b;
    float c;
};
extern struct Blk D_003B38F0;
extern struct Blk D_003B3900;
extern struct Blk D_003B3910;
extern float D_00241E90;
extern void *memset(void *p, int c, unsigned int n);

void func_1C6470(int arg, int id)
{
    float s;

    if (id == 0xFFFF) {
        if (arg) {
            D_003B38F0.a = 0.0f;
            D_003B38F0.b = 0.0f;
            D_003B38F0.c = 0.0f;
            ((float *)&D_003B38F0)[3] = 1.0f;
            memset(&D_003B3900, 0, 12);
            s = D_00241E90;
            D_003B3900.b = s * -0.5811100006103516f;
            D_003B3900.c = s * -1.5893330574035645f;
            memset(&D_003B3910, 0, 12);
            D_003B3910.b = s * -0.5811100006103516f;
            D_003B3910.c = s * 1.5893330574035645f;
        }
    }
}
