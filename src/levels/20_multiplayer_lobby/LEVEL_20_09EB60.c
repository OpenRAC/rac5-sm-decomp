/* LEVEL_20:0x09EB60 -- placement copy of LEVEL_01_0C5120.c: converts a screen position to offset coordinates, mirrored when flagged. */
typedef struct {
    char pad0[0x10];
    int ox;
    int oy;
} Cfg;

extern float D_001112D0;
extern int D_00111270;
extern int D_00111274;
extern Cfg D_0019D170;
extern int func_024940(int mode);

void func_09EB60(short *px, short *py, float x, float y)
{
    float sx, sy;
    *px = (int)x;
    *py = (int)y;
    sx = x - 256.0f;
    sy = y - 256.0f;
    x = sx * D_001112D0 + (float)D_0019D170.ox;
    y = sy * D_001112D0 + (float)D_0019D170.oy;
    *px = (int)(x + D_001112D0 * (float)D_00111270);
    *py = (int)(y + D_001112D0 * (float)D_00111274);
    if (func_024940(4) != 0) {
        short t = *px - 0xF0;
        *px = 0xF0 - t;
    }
}
