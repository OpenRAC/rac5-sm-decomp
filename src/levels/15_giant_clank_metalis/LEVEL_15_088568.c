/* LEVEL_15:0x088568 -- placement copy of LEVEL_01_0A7CA0.c: maps a point from the current view rectangle into its target rectangle (scale factors are cached on first use). */
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

extern View *D_0014BCE0[][3];
extern int D_0014B560[1];
extern int D_0014B564[1];
extern unsigned char D_0014BE10;
extern float D_0014BE08;
extern float D_0014BE0C;

extern int func_087268(int index);
extern int func_087280(void);

void func_088568(float px, float py, float *ox, float *oy)
{
    View *view;
    float sy;
    float v0;

    if (func_087268(D_0014B560[0]) != 0 && func_087280() != 0) {
        if (D_0014BCE0[D_0014B560[0]][D_0014B564[0]]->ready == 0) {
            D_0014BCE0[D_0014B560[0]][D_0014B564[0]]->sx = 1.0f / (D_0014BCE0[D_0014B560[0]][D_0014B564[0]]->u1 - D_0014BCE0[D_0014B560[0]][D_0014B564[0]]->u0);
            D_0014BCE0[D_0014B560[0]][D_0014B564[0]]->sy = 1.0f / (D_0014BCE0[D_0014B560[0]][D_0014B564[0]]->v1 - D_0014BCE0[D_0014B560[0]][D_0014B564[0]]->v0);
            D_0014BCE0[D_0014B560[0]][D_0014B564[0]]->w = D_0014BCE0[D_0014B560[0]][D_0014B564[0]]->x1 - D_0014BCE0[D_0014B560[0]][D_0014B564[0]]->x0;
            D_0014BCE0[D_0014B560[0]][D_0014B564[0]]->h = D_0014BCE0[D_0014B560[0]][D_0014B564[0]]->y1 - D_0014BCE0[D_0014B560[0]][D_0014B564[0]]->y0;
            D_0014BCE0[D_0014B560[0]][D_0014B564[0]]->ready = 1;
        }
        view = D_0014BCE0[D_0014B560[0]][D_0014B564[0]];
        v0 = view->v0;
        sy = view->sy;
        *ox = (px - view->u0) * view->sx * view->w + view->x0;
        *oy = (py - v0) * sy * D_0014BCE0[D_0014B560[0]][D_0014B564[0]]->h + D_0014BCE0[D_0014B560[0]][D_0014B564[0]]->y0;
        if (D_0014BE10 != 0) {
            *ox = *ox + D_0014BE08;
            *oy = *oy + D_0014BE0C;
        }
    }
}
