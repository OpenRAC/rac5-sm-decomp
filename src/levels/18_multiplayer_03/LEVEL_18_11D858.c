/* LEVEL_18:0x11D858 -- placement copy of LEVEL_16_11E7A0.c: sets up the full-screen text window (unit scale, 480x272, black shadow, blue-grey ink), builds the label for string 0x6D9 and refreshes the shared text block. */
extern char D_001BA6B8[];
extern char D_001BBD60[];
extern void func_099C40(float scale_x, float scale_y, float scale_z, short left, short top, short right, short bottom, unsigned int arg8, unsigned int arg9, unsigned int arg10, unsigned int arg11);
extern int func_10DFE0(int id);
extern void func_11CD48(int label, char *data, int a, int b);
extern void func_0A8488(char *data);

void func_11D858(void)
{
    func_099C40(1.0f, 1.0f, 0.0f, 0, 0, 0x1E0, 0x110, 0xFF000000u, 0xFF000000u, 0xFF4D422Eu, 0xFF4D422Eu);
    func_11CD48(func_10DFE0(0x6D9), D_001BA6B8, 1, 0);
    func_0A8488(D_001BBD60);
}
