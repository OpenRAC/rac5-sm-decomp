extern int D_002CA934[];
extern int D_002CA938[];
extern int D_002CA93C[];
extern int D_002CA940[];

void VRAM_SetViewport__Fiiii(int a, int b, int c, int d)
{
    D_002CA934[0] = a;
    D_002CA938[0] = b;
    D_002CA93C[0] = c;
    D_002CA940[0] = d;
}
