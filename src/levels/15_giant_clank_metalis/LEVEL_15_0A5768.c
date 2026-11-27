/* LEVEL_15:0x0A5768 -- placement copy of LEVEL_01_0C5120.c: converts a screen position to offset coordinates, mirrored when flagged. */
typedef struct {
    char pad0[0x10];
    int ox;
    int oy;
} Cfg;

extern float D_001557F8;
extern int D_00155798;
extern int D_0015579C;
extern Cfg D_00243230;
extern int func_023BC8(int mode);

void func_0A5768(short *px, short *py, float x, float y)
{
    float sx, sy;
    *px = (int)x;
    *py = (int)y;
    sx = x - 256.0f;
    sy = y - 256.0f;
    x = sx * D_001557F8 + (float)D_00243230.ox;
    y = sy * D_001557F8 + (float)D_00243230.oy;
    *px = (int)(x + D_001557F8 * (float)D_00155798);
    *py = (int)(y + D_001557F8 * (float)D_0015579C);
    if (func_023BC8(4) != 0) {
        short t = *px - 0xF0;
        *px = 0xF0 - t;
    }
}
