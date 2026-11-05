/* Initializes four cached handles through the module-local creator. */
typedef unsigned int u32;

extern int D_001FF09C;
extern int D_001FF0A0;
extern int D_001FF0A4;
extern int D_001FF0A8;
extern u32 D_002A11E8;
extern u32 D_002A1270;

extern int func_10AAC0(u32 mode);

void func_074660(void)
{
    if (D_001FF09C == -1)
        D_001FF09C = func_10AAC0((D_002A11E8 << 16) | 0x98003045u);
    if (D_001FF0A0 == -1)
        D_001FF0A0 = func_10AAC0((D_002A11E8 << 16) | 0x90003045u);
    if (D_001FF0A4 == -1)
        D_001FF0A4 = func_10AAC0((D_002A1270 << 16) | 0x98003045u);
    if (D_001FF0A8 == -1)
        D_001FF0A8 = func_10AAC0((D_002A1270 << 16) | 0x90003045u);
}
