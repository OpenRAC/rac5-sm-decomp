/* LEVEL_20:0x080A28 -- placement copy of LEVEL_01_0A7CA0.c: maps a point from the current view rectangle into its target rectangle (scale factors are cached on first use). */
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

extern View *D_00107710[][3];
extern int D_00106F90[1];
extern int D_00106F94[1];
extern unsigned char D_00107838;
extern float D_00107830;
extern float D_00107834;

extern int func_080010(int index);
extern int func_080028(void);

void func_080A28(float px, float py, float *ox, float *oy)
{
    View *view;
    float sy;
    float v0;

    if (func_080010(D_00106F90[0]) != 0 && func_080028() != 0) {
        if (D_00107710[D_00106F90[0]][D_00106F94[0]]->ready == 0) {
            D_00107710[D_00106F90[0]][D_00106F94[0]]->sx = 1.0f / (D_00107710[D_00106F90[0]][D_00106F94[0]]->u1 - D_00107710[D_00106F90[0]][D_00106F94[0]]->u0);
            D_00107710[D_00106F90[0]][D_00106F94[0]]->sy = 1.0f / (D_00107710[D_00106F90[0]][D_00106F94[0]]->v1 - D_00107710[D_00106F90[0]][D_00106F94[0]]->v0);
            D_00107710[D_00106F90[0]][D_00106F94[0]]->w = D_00107710[D_00106F90[0]][D_00106F94[0]]->x1 - D_00107710[D_00106F90[0]][D_00106F94[0]]->x0;
            D_00107710[D_00106F90[0]][D_00106F94[0]]->h = D_00107710[D_00106F90[0]][D_00106F94[0]]->y1 - D_00107710[D_00106F90[0]][D_00106F94[0]]->y0;
            D_00107710[D_00106F90[0]][D_00106F94[0]]->ready = 1;
        }
        view = D_00107710[D_00106F90[0]][D_00106F94[0]];
        v0 = view->v0;
        sy = view->sy;
        *ox = (px - view->u0) * view->sx * view->w + view->x0;
        *oy = (py - v0) * sy * D_00107710[D_00106F90[0]][D_00106F94[0]]->h + D_00107710[D_00106F90[0]][D_00106F94[0]]->y0;
        if (D_00107838 != 0) {
            *ox = *ox + D_00107830;
            *oy = *oy + D_00107834;
        }
    }
}
