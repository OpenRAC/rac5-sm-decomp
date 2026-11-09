/* LEVEL_08:0x1EF5F0 -- placement copy of LEVEL_04_1C6470.c: on id 0xFFFF with a non-null arg, resets one vector block and fills two others from a scale. */
struct Blk {
    float a;
    float b;
    float c;
};
extern struct Blk D_003EAA38;
extern struct Blk D_003EAA48;
extern struct Blk D_003EAA58;
extern float D_00276550;
extern void *memset(void *p, int c, unsigned int n);

void func_1EF5F0(int arg, int id)
{
    float s;

    if (id == 0xFFFF) {
        if (arg) {
            D_003EAA38.a = 0.0f;
            D_003EAA38.b = 0.0f;
            D_003EAA38.c = 0.0f;
            ((float *)&D_003EAA38)[3] = 1.0f;
            memset(&D_003EAA48, 0, 12);
            s = D_00276550;
            D_003EAA48.b = s * -0.5811100006103516f;
            D_003EAA48.c = s * -1.5893330574035645f;
            memset(&D_003EAA58, 0, 12);
            D_003EAA58.b = s * -0.5811100006103516f;
            D_003EAA58.c = s * 1.5893330574035645f;
        }
    }
}
