extern int D_002B3434[];
extern int D_002B3438[];
extern int D_002B343C[];
extern int D_002B3440[];

void VRAM_SetViewport__Fiiii(int a, int b, int c, int d)
{
    D_002B3434[0] = a;
    D_002B3438[0] = b;
    D_002B343C[0] = c;
    D_002B3440[0] = d;
}
