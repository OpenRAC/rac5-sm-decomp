/* LEVEL_23:0x09EA10 -- placement copy of LEVEL_01_0A7CA0.c: maps a point from the current view rectangle into its target rectangle (scale factors are cached on first use). */
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

extern View *D_001CA460[][3];
extern int D_001C9CE0[1];
extern int D_001C9CE4[1];
extern unsigned char D_001CA590;
extern float D_001CA588;
extern float D_001CA58C;

extern int func_09D710(int index);
extern int func_09D728(void);

void func_09EA10(float px, float py, float *ox, float *oy)
{
    View *view;
    float sy;
    float v0;

    if (func_09D710(D_001C9CE0[0]) != 0 && func_09D728() != 0) {
        if (D_001CA460[D_001C9CE0[0]][D_001C9CE4[0]]->ready == 0) {
            D_001CA460[D_001C9CE0[0]][D_001C9CE4[0]]->sx = 1.0f / (D_001CA460[D_001C9CE0[0]][D_001C9CE4[0]]->u1 - D_001CA460[D_001C9CE0[0]][D_001C9CE4[0]]->u0);
            D_001CA460[D_001C9CE0[0]][D_001C9CE4[0]]->sy = 1.0f / (D_001CA460[D_001C9CE0[0]][D_001C9CE4[0]]->v1 - D_001CA460[D_001C9CE0[0]][D_001C9CE4[0]]->v0);
            D_001CA460[D_001C9CE0[0]][D_001C9CE4[0]]->w = D_001CA460[D_001C9CE0[0]][D_001C9CE4[0]]->x1 - D_001CA460[D_001C9CE0[0]][D_001C9CE4[0]]->x0;
            D_001CA460[D_001C9CE0[0]][D_001C9CE4[0]]->h = D_001CA460[D_001C9CE0[0]][D_001C9CE4[0]]->y1 - D_001CA460[D_001C9CE0[0]][D_001C9CE4[0]]->y0;
            D_001CA460[D_001C9CE0[0]][D_001C9CE4[0]]->ready = 1;
        }
        view = D_001CA460[D_001C9CE0[0]][D_001C9CE4[0]];
        v0 = view->v0;
        sy = view->sy;
        *ox = (px - view->u0) * view->sx * view->w + view->x0;
        *oy = (py - v0) * sy * D_001CA460[D_001C9CE0[0]][D_001C9CE4[0]]->h + D_001CA460[D_001C9CE0[0]][D_001C9CE4[0]]->y0;
        if (D_001CA590 != 0) {
            *ox = *ox + D_001CA588;
            *oy = *oy + D_001CA58C;
        }
    }
}
