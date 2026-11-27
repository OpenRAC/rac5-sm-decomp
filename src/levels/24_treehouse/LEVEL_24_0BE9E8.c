/* LEVEL_24:0x0BE9E8 -- placement copy of LEVEL_01_0C5120.c: converts a screen position to offset coordinates, mirrored when flagged. */
typedef struct {
    char pad0[0x10];
    int ox;
    int oy;
} Cfg;

extern float D_001D17F8;
extern int D_001D1798;
extern int D_001D179C;
extern Cfg D_002F78B0;
extern int func_027930(int mode);

void func_0BE9E8(short *px, short *py, float x, float y)
{
    float sx, sy;
    *px = (int)x;
    *py = (int)y;
    sx = x - 256.0f;
    sy = y - 256.0f;
    x = sx * D_001D17F8 + (float)D_002F78B0.ox;
    y = sy * D_001D17F8 + (float)D_002F78B0.oy;
    *px = (int)(x + D_001D17F8 * (float)D_001D1798);
    *py = (int)(y + D_001D17F8 * (float)D_001D179C);
    if (func_027930(4) != 0) {
        short t = *px - 0xF0;
        *px = 0xF0 - t;
    }
}
