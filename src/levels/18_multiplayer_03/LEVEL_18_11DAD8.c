/* LEVEL_18:0x11DAD8 -- placement copy of LEVEL_16_11EA20.c: draws a full-screen overlay quad, then starts the loaded resource on a global and runs a final helper. */
extern char D_001BA6B8[];
extern char D_001BC0D0[];

extern void func_099C40(float scale_x, float scale_y, float scale_z, short left, short top, short right, short bottom, unsigned int arg8, unsigned int arg9, unsigned int arg10, unsigned int arg11);
extern int func_10DFE0(int id);
extern void func_11CD48(int resource, char *data, int a, int b);
extern void func_0A8488(char *data);

void func_11DAD8(void)
{
    func_099C40(1.0f, 1.0f, 0.0f, 0, 0, 0x1E0, 0x110, 0xFF000000u, 0xFF000000u, 0xFF4D422Eu, 0xFF4D422Eu);
    func_11CD48(func_10DFE0(0x9FD), D_001BA6B8, 1, 0);
    func_0A8488(D_001BC0D0);
}
