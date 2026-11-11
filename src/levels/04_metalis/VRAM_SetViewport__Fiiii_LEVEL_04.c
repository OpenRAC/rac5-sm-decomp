extern int D_002CDC34[];
extern int D_002CDC38[];
extern int D_002CDC3C[];
extern int D_002CDC40[];

void VRAM_SetViewport__Fiiii(int a, int b, int c, int d)
{
    D_002CDC34[0] = a;
    D_002CDC38[0] = b;
    D_002CDC3C[0] = c;
    D_002CDC40[0] = d;
}
