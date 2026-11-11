/* LEVEL_16:0x11E188 -- resets a display state, sets a clear/window setup and runs two helpers. */

extern char D_002E1590[];

void func_09AC30(float scale_x, float scale_y, float scale_z, short left, short top, short right, short bottom,
                 unsigned int arg8, unsigned int arg9, unsigned int arg10, unsigned int arg11);
void func_11DC90(char *a0, int a1, int a2, int a3);
void func_09D198(char *a0, unsigned int a1, float f12);
void func_0A94B0(char *a0);

void func_11E188(char *a0, char *a1, int a2)
{
    func_09AC30(1.0f, 1.0f, 0.0f, 0, 0, 0x1E0, 0x110,
                0xFF000000u, 0xFF000000u, 0xFF4D422Eu, 0xFF4D422Eu);
    func_11DC90(a0, a2, 1, 0);
    func_09D198(a1, 0xFFFFFFFFu, 0.0f);
    func_0A94B0(D_002E1590);
}
