/* LEVEL_20:0x0F0B20 -- placement copy of LEVEL_16_11EA20.c: draws a full-screen overlay quad, then starts the loaded resource on a global and runs a final helper. */
extern char D_0011B8D8[];
extern char D_0011D2F0[];

extern void func_085328(float scale_x, float scale_y, float scale_z, short left, short top, short right, short bottom, unsigned int arg8, unsigned int arg9, unsigned int arg10, unsigned int arg11);
extern int func_0E2118(int id);
extern void func_0EFD90(int resource, char *data, int a, int b);
extern void func_0939E0(char *data);

void func_0F0B20(void)
{
    func_085328(1.0f, 1.0f, 0.0f, 0, 0, 0x1E0, 0x110, 0xFF000000u, 0xFF000000u, 0xFF4D422Eu, 0xFF4D422Eu);
    func_0EFD90(func_0E2118(0x9FD), D_0011B8D8, 1, 0);
    func_0939E0(D_0011D2F0);
}
