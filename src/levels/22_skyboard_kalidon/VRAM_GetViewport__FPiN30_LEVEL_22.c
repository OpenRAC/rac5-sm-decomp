extern int D_00208FF4;
extern int D_00208FF8;
extern int D_00208FFC;
extern int D_00209000;

void VRAM_GetViewport__FPiN30(int *first, int *second, int *third, int *fourth)
{
    *first = D_00208FF4;
    *second = D_00208FF8;
    *third = D_00208FFC;
    *fourth = D_00209000;
}
