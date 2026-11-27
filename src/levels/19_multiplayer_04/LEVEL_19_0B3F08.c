/* LEVEL_19:0x0B3F08 -- placement copy of LEVEL_01_0C5120.c: converts a screen position to offset coordinates, mirrored when flagged. */
typedef struct {
    char pad0[0x10];
    int ox;
    int oy;
} Cfg;

extern float D_001AFD70;
extern int D_001AFD10;
extern int D_001AFD14;
extern Cfg D_00279AB0;
extern int func_0279E0(int mode);

void func_0B3F08(short *px, short *py, float x, float y)
{
    float sx, sy;
    *px = (int)x;
    *py = (int)y;
    sx = x - 256.0f;
    sy = y - 256.0f;
    x = sx * D_001AFD70 + (float)D_00279AB0.ox;
    y = sy * D_001AFD70 + (float)D_00279AB0.oy;
    *px = (int)(x + D_001AFD70 * (float)D_001AFD10);
    *py = (int)(y + D_001AFD70 * (float)D_001AFD14);
    if (func_0279E0(4) != 0) {
        short t = *px - 0xF0;
        *px = 0xF0 - t;
    }
}
