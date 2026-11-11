/* LEVEL_19:0x095BC0 -- placement copy of LEVEL_01_0A7CA0.c: maps a point from the current view rectangle into its target rectangle (scale factors are cached on first use). */
typedef struct View {
    char pad_00[8];
    float x0;
    float y0;
    float x1;
    float y1;
    float u0;
    float v0;
    float u1;
    float v1;
    unsigned char ready;
    char pad_29[3];
    float sx;
    float sy;
    float w;
    float h;
} View;

extern View *D_001A61B0[][3];
extern int D_001A5A30[1];
extern int D_001A5A34[1];
extern unsigned char D_001A62D8;
extern float D_001A62D0;
extern float D_001A62D4;

extern int func_0951A8(int index);
extern int func_0951C0(void);

void func_095BC0(float px, float py, float *ox, float *oy)
{
    View *view;
    float sy;
    float v0;

    if (func_0951A8(D_001A5A30[0]) != 0 && func_0951C0() != 0) {
        if (D_001A61B0[D_001A5A30[0]][D_001A5A34[0]]->ready == 0) {
            D_001A61B0[D_001A5A30[0]][D_001A5A34[0]]->sx = 1.0f / (D_001A61B0[D_001A5A30[0]][D_001A5A34[0]]->u1 - D_001A61B0[D_001A5A30[0]][D_001A5A34[0]]->u0);
            D_001A61B0[D_001A5A30[0]][D_001A5A34[0]]->sy = 1.0f / (D_001A61B0[D_001A5A30[0]][D_001A5A34[0]]->v1 - D_001A61B0[D_001A5A30[0]][D_001A5A34[0]]->v0);
            D_001A61B0[D_001A5A30[0]][D_001A5A34[0]]->w = D_001A61B0[D_001A5A30[0]][D_001A5A34[0]]->x1 - D_001A61B0[D_001A5A30[0]][D_001A5A34[0]]->x0;
            D_001A61B0[D_001A5A30[0]][D_001A5A34[0]]->h = D_001A61B0[D_001A5A30[0]][D_001A5A34[0]]->y1 - D_001A61B0[D_001A5A30[0]][D_001A5A34[0]]->y0;
            D_001A61B0[D_001A5A30[0]][D_001A5A34[0]]->ready = 1;
        }
        view = D_001A61B0[D_001A5A30[0]][D_001A5A34[0]];
        v0 = view->v0;
        sy = view->sy;
        *ox = (px - view->u0) * view->sx * view->w + view->x0;
        *oy = (py - v0) * sy * D_001A61B0[D_001A5A30[0]][D_001A5A34[0]]->h + D_001A61B0[D_001A5A30[0]][D_001A5A34[0]]->y0;
        if (D_001A62D8 != 0) {
            *ox = *ox + D_001A62D0;
            *oy = *oy + D_001A62D4;
        }
    }
}
