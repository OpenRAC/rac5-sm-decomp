extern int D_002A01B4[];
extern int D_002A01B8[];
extern int D_002A01BC[];
extern int D_002A01C0[];

void VRAM_SetViewport__Fiiii(int a, int b, int c, int d)
{
    D_002A01B4[0] = a;
    D_002A01B8[0] = b;
    D_002A01BC[0] = c;
    D_002A01C0[0] = d;
}
