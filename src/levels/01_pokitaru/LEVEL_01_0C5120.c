/* LEVEL_01:0x0C5120 -- converts a screen position to offset coordinates, mirrored when flagged. */
typedef struct {
    char pad0[0x10];
    int ox;
    int oy;
} Cfg;

extern float D_00200B78;
extern int D_00200B18;
extern int D_00200B1C;
extern Cfg D_0032B9F0;
extern int func_02A3F0(int mode);

void func_0C5120(short *px, short *py, float x, float y)
{
    float sx, sy;
    *px = (int)x;
    *py = (int)y;
    sx = x - 256.0f;
    sy = y - 256.0f;
    x = sx * D_00200B78 + (float)D_0032B9F0.ox;
    y = sy * D_00200B78 + (float)D_0032B9F0.oy;
    *px = (int)(x + D_00200B78 * (float)D_00200B18);
    *py = (int)(y + D_00200B78 * (float)D_00200B1C);
    if (func_02A3F0(4) != 0) {
        short t = *px - 0xF0;
        *px = 0xF0 - t;
    }
}
