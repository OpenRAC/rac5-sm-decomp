/* LEVEL_09:0x0C23D0 -- placement copy of LEVEL_01_0C5120.c: converts a screen position to offset coordinates, mirrored when flagged. */
typedef struct {
    char pad0[0x10];
    int ox;
    int oy;
} Cfg;

extern float D_001EA978;
extern int D_001EA918;
extern int D_001EA91C;
extern Cfg D_00313170;
extern int func_029258(int mode);

void func_0C23D0(short *px, short *py, float x, float y)
{
    float sx, sy;
    *px = (int)x;
    *py = (int)y;
    sx = x - 256.0f;
    sy = y - 256.0f;
    x = sx * D_001EA978 + (float)D_00313170.ox;
    y = sy * D_001EA978 + (float)D_00313170.oy;
    *px = (int)(x + D_001EA978 * (float)D_001EA918);
    *py = (int)(y + D_001EA978 * (float)D_001EA91C);
    if (func_029258(4) != 0) {
        short t = *px - 0xF0;
        *px = 0xF0 - t;
    }
}
