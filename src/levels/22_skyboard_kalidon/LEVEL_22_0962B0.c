/* LEVEL_22:0x0962B0 -- placement copy of LEVEL_01_0A7CA0.c: maps a point from the current view rectangle into its target rectangle (scale factors are cached on first use). */
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

extern View *D_001563E0[][3];
extern int D_00155C60[1];
extern int D_00155C64[1];
extern unsigned char D_00156510;
extern float D_00156508;
extern float D_0015650C;

extern int func_094FB0(int index);
extern int func_094FC8(void);

void func_0962B0(float px, float py, float *ox, float *oy)
{
    View *view;
    float sy;
    float v0;

    if (func_094FB0(D_00155C60[0]) != 0 && func_094FC8() != 0) {
        if (D_001563E0[D_00155C60[0]][D_00155C64[0]]->ready == 0) {
            D_001563E0[D_00155C60[0]][D_00155C64[0]]->sx = 1.0f / (D_001563E0[D_00155C60[0]][D_00155C64[0]]->u1 - D_001563E0[D_00155C60[0]][D_00155C64[0]]->u0);
            D_001563E0[D_00155C60[0]][D_00155C64[0]]->sy = 1.0f / (D_001563E0[D_00155C60[0]][D_00155C64[0]]->v1 - D_001563E0[D_00155C60[0]][D_00155C64[0]]->v0);
            D_001563E0[D_00155C60[0]][D_00155C64[0]]->w = D_001563E0[D_00155C60[0]][D_00155C64[0]]->x1 - D_001563E0[D_00155C60[0]][D_00155C64[0]]->x0;
            D_001563E0[D_00155C60[0]][D_00155C64[0]]->h = D_001563E0[D_00155C60[0]][D_00155C64[0]]->y1 - D_001563E0[D_00155C60[0]][D_00155C64[0]]->y0;
            D_001563E0[D_00155C60[0]][D_00155C64[0]]->ready = 1;
        }
        view = D_001563E0[D_00155C60[0]][D_00155C64[0]];
        v0 = view->v0;
        sy = view->sy;
        *ox = (px - view->u0) * view->sx * view->w + view->x0;
        *oy = (py - v0) * sy * D_001563E0[D_00155C60[0]][D_00155C64[0]]->h + D_001563E0[D_00155C60[0]][D_00155C64[0]]->y0;
        if (D_00156510 != 0) {
            *ox = *ox + D_00156508;
            *oy = *oy + D_0015650C;
        }
    }
}
