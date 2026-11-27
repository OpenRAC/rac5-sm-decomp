/* LEVEL_23:0x0BBEC0 -- placement copy of LEVEL_01_0C5120.c: converts a screen position to offset coordinates, mirrored when flagged. */
typedef struct {
    char pad0[0x10];
    int ox;
    int oy;
} Cfg;

extern float D_001D3F78;
extern int D_001D3F18;
extern int D_001D3F1C;
extern Cfg D_002FCE30;
extern int func_027F60(int mode);

void func_0BBEC0(short *px, short *py, float x, float y)
{
    float sx, sy;
    *px = (int)x;
    *py = (int)y;
    sx = x - 256.0f;
    sy = y - 256.0f;
    x = sx * D_001D3F78 + (float)D_002FCE30.ox;
    y = sy * D_001D3F78 + (float)D_002FCE30.oy;
    *px = (int)(x + D_001D3F78 * (float)D_001D3F18);
    *py = (int)(y + D_001D3F78 * (float)D_001D3F1C);
    if (func_027F60(4) != 0) {
        short t = *px - 0xF0;
        *px = 0xF0 - t;
    }
}
