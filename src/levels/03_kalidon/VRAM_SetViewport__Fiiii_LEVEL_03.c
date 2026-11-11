extern int D_002CE2B4[];
extern int D_002CE2B8[];
extern int D_002CE2BC[];
extern int D_002CE2C0[];

void VRAM_SetViewport__Fiiii(int a, int b, int c, int d)
{
    D_002CE2B4[0] = a;
    D_002CE2B8[0] = b;
    D_002CE2BC[0] = c;
    D_002CE2C0[0] = d;
}
