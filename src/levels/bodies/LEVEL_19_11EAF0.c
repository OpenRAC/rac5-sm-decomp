/* LEVEL_19:0x11EAF0 -- placement copy of LEVEL_16_11E188.c: resets a display state, sets a clear/window setup and runs two helpers. */

extern char D_002E1710[];

void func_09A4C0(float scale_x, float scale_y, float scale_z, short left, short top, short right, short bottom,
                 unsigned int arg8, unsigned int arg9, unsigned int arg10, unsigned int arg11);
void func_11E5F8(char *a0, int a1, int a2, int a3);
void func_09CA28(char *a0, unsigned int a1, float f12);
void func_0A8D88(char *a0);

void func_11EAF0(char *a0, char *a1, int a2)
{
    func_09A4C0(1.0f, 1.0f, 0.0f, 0, 0, 0x1E0, 0x110,
                0xFF000000u, 0xFF000000u, 0xFF4D422Eu, 0xFF4D422Eu);
    func_11E5F8(a0, a2, 1, 0);
    func_09CA28(a1, 0xFFFFFFFFu, 0.0f);
    func_0A8D88(D_002E1710);
}
