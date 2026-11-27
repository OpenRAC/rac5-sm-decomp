/* LEVEL_17:0x0B3B70 -- placement copy of LEVEL_01_0C5120.c: converts a screen position to offset coordinates, mirrored when flagged. */
typedef struct {
    char pad0[0x10];
    int ox;
    int oy;
} Cfg;

extern float D_001A21F0;
extern int D_001A2190;
extern int D_001A2194;
extern Cfg D_0026AC30;
extern int func_0277B8(int mode);

void func_0B3B70(short *px, short *py, float x, float y)
{
    float sx, sy;
    *px = (int)x;
    *py = (int)y;
    sx = x - 256.0f;
    sy = y - 256.0f;
    x = sx * D_001A21F0 + (float)D_0026AC30.ox;
    y = sy * D_001A21F0 + (float)D_0026AC30.oy;
    *px = (int)(x + D_001A21F0 * (float)D_001A2190);
    *py = (int)(y + D_001A21F0 * (float)D_001A2194);
    if (func_0277B8(4) != 0) {
        short t = *px - 0xF0;
        *px = 0xF0 - t;
    }
}
