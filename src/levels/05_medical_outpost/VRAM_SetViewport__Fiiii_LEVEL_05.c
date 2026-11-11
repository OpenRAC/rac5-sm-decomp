extern int D_0029F2F4[];
extern int D_0029F2F8[];
extern int D_0029F2FC[];
extern int D_0029F300[];

void VRAM_SetViewport__Fiiii(int a, int b, int c, int d)
{
    D_0029F2F4[0] = a;
    D_0029F2F8[0] = b;
    D_0029F2FC[0] = c;
    D_0029F300[0] = d;
}
