/* LEVEL_24:0x195098 -- placement copy of LEVEL_04_1C6470.c: on id 0xFFFF with a non-null arg, resets one vector block and fills two others from a scale. */
struct Blk {
    float a;
    float b;
    float c;
};
extern struct Blk D_00362218;
extern struct Blk D_00362228;
extern struct Blk D_00362238;
extern float D_001F51F0;
extern void *memset(void *p, int c, unsigned int n);

void func_195098(int arg, int id)
{
    float s;

    if (id == 0xFFFF) {
        if (arg) {
            D_00362218.a = 0.0f;
            D_00362218.b = 0.0f;
            D_00362218.c = 0.0f;
            ((float *)&D_00362218)[3] = 1.0f;
            memset(&D_00362228, 0, 12);
            s = D_001F51F0;
            D_00362228.b = s * -0.5811100006103516f;
            D_00362228.c = s * -1.5893330574035645f;
            memset(&D_00362238, 0, 12);
            D_00362238.b = s * -0.5811100006103516f;
            D_00362238.c = s * 1.5893330574035645f;
        }
    }
}
