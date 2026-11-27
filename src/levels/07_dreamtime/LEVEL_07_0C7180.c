/* LEVEL_07:0x0C7180 -- placement copy of LEVEL_01_0C5120.c: converts a screen position to offset coordinates, mirrored when flagged. */
typedef struct {
    char pad0[0x10];
    int ox;
    int oy;
} Cfg;

extern float D_00214E78;
extern int D_00214E18;
extern int D_00214E1C;
extern Cfg D_003412F0;
extern int func_02A730(int mode);

void func_0C7180(short *px, short *py, float x, float y)
{
    float sx, sy;
    *px = (int)x;
    *py = (int)y;
    sx = x - 256.0f;
    sy = y - 256.0f;
    x = sx * D_00214E78 + (float)D_003412F0.ox;
    y = sy * D_00214E78 + (float)D_003412F0.oy;
    *px = (int)(x + D_00214E78 * (float)D_00214E18);
    *py = (int)(y + D_00214E78 * (float)D_00214E1C);
    if (func_02A730(4) != 0) {
        short t = *px - 0xF0;
        *px = 0xF0 - t;
    }
}
