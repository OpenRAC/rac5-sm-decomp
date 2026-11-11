/* LEVEL_17:0x11E448 -- placement copy of LEVEL_16_11EA20.c: draws a full-screen overlay quad, then starts the loaded resource on a global and runs a final helper. */
extern char D_001AC830[];
extern char D_001AE248[];

extern void func_09A128(float scale_x, float scale_y, float scale_z, short left, short top, short right, short bottom, unsigned int arg8, unsigned int arg9, unsigned int arg10, unsigned int arg11);
extern int func_10E8A8(int id);
extern void func_11D6B8(int resource, char *data, int a, int b);
extern void func_0A89F0(char *data);

void func_11E448(void)
{
    func_09A128(1.0f, 1.0f, 0.0f, 0, 0, 0x1E0, 0x110, 0xFF000000u, 0xFF000000u, 0xFF4D422Eu, 0xFF4D422Eu);
    func_11D6B8(func_10E8A8(0x9FD), D_001AC830, 1, 0);
    func_0A89F0(D_001AE248);
}
