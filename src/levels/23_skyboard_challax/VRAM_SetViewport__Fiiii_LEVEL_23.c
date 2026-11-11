extern int D_00284874[];
extern int D_00284878[];
extern int D_0028487C[];
extern int D_00284880[];

void VRAM_SetViewport__Fiiii(int a, int b, int c, int d)
{
    D_00284874[0] = a;
    D_00284878[0] = b;
    D_0028487C[0] = c;
    D_00284880[0] = d;
}
