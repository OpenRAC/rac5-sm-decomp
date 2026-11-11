extern int D_003026B4[];
extern int D_003026B8[];
extern int D_003026BC[];
extern int D_003026C0[];

void VRAM_SetViewport__Fiiii(int a, int b, int c, int d)
{
    D_003026B4[0] = a;
    D_003026B8[0] = b;
    D_003026BC[0] = c;
    D_003026C0[0] = d;
}
