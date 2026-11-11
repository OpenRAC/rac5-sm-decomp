/* LEVEL_16:0x11EA20 -- draws a full-screen overlay quad, then starts the loaded resource on a global and runs a final helper. */
extern char D_001B9238[];
extern char D_001BAC50[];

extern void func_09AC30(float scale_x, float scale_y, float scale_z, short left, short top, short right, short bottom, unsigned int arg8, unsigned int arg9, unsigned int arg10, unsigned int arg11);
extern int func_10F330(int id);
extern void func_11DC90(int resource, char *data, int a, int b);
extern void func_0A94B0(char *data);

void func_11EA20(void)
{
    func_09AC30(1.0f, 1.0f, 0.0f, 0, 0, 0x1E0, 0x110, 0xFF000000u, 0xFF000000u, 0xFF4D422Eu, 0xFF4D422Eu);
    func_11DC90(func_10F330(0x9FD), D_001B9238, 1, 0);
    func_0A94B0(D_001BAC50);
}
