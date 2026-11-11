/* LEVEL_17:0x095828 -- placement copy of LEVEL_01_0A7CA0.c: maps a point from the current view rectangle into its target rectangle (scale factors are cached on first use). */
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

extern View *D_00198630[][3];
extern int D_00197EB0[1];
extern int D_00197EB4[1];
extern unsigned char D_00198758;
extern float D_00198750;
extern float D_00198754;

extern int func_094E10(int index);
extern int func_094E28(void);

void func_095828(float px, float py, float *ox, float *oy)
{
    View *view;
    float sy;
    float v0;

    if (func_094E10(D_00197EB0[0]) != 0 && func_094E28() != 0) {
        if (D_00198630[D_00197EB0[0]][D_00197EB4[0]]->ready == 0) {
            D_00198630[D_00197EB0[0]][D_00197EB4[0]]->sx = 1.0f / (D_00198630[D_00197EB0[0]][D_00197EB4[0]]->u1 - D_00198630[D_00197EB0[0]][D_00197EB4[0]]->u0);
            D_00198630[D_00197EB0[0]][D_00197EB4[0]]->sy = 1.0f / (D_00198630[D_00197EB0[0]][D_00197EB4[0]]->v1 - D_00198630[D_00197EB0[0]][D_00197EB4[0]]->v0);
            D_00198630[D_00197EB0[0]][D_00197EB4[0]]->w = D_00198630[D_00197EB0[0]][D_00197EB4[0]]->x1 - D_00198630[D_00197EB0[0]][D_00197EB4[0]]->x0;
            D_00198630[D_00197EB0[0]][D_00197EB4[0]]->h = D_00198630[D_00197EB0[0]][D_00197EB4[0]]->y1 - D_00198630[D_00197EB0[0]][D_00197EB4[0]]->y0;
            D_00198630[D_00197EB0[0]][D_00197EB4[0]]->ready = 1;
        }
        view = D_00198630[D_00197EB0[0]][D_00197EB4[0]];
        v0 = view->v0;
        sy = view->sy;
        *ox = (px - view->u0) * view->sx * view->w + view->x0;
        *oy = (py - v0) * sy * D_00198630[D_00197EB0[0]][D_00197EB4[0]]->h + D_00198630[D_00197EB0[0]][D_00197EB4[0]]->y0;
        if (D_00198758 != 0) {
            *ox = *ox + D_00198750;
            *oy = *oy + D_00198754;
        }
    }
}
