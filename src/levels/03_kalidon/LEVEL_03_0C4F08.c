/* LEVEL_03:0x0C4F08 -- placement copy of LEVEL_01_0C5120.c: converts a screen position to offset coordinates, mirrored when flagged. */
typedef struct {
    char pad0[0x10];
    int ox;
    int oy;
} Cfg;

extern float D_002191F8;
extern int D_00219198;
extern int D_0021919C;
extern Cfg D_00346870;
extern int func_02A1E8(int mode);

void func_0C4F08(short *px, short *py, float x, float y)
{
    float sx, sy;
    *px = (int)x;
    *py = (int)y;
    sx = x - 256.0f;
    sy = y - 256.0f;
    x = sx * D_002191F8 + (float)D_00346870.ox;
    y = sy * D_002191F8 + (float)D_00346870.oy;
    *px = (int)(x + D_002191F8 * (float)D_00219198);
    *py = (int)(y + D_002191F8 * (float)D_0021919C);
    if (func_02A1E8(4) != 0) {
        short t = *px - 0xF0;
        *px = 0xF0 - t;
    }
}
