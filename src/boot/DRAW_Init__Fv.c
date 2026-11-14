/* DRAW_Init__Fv -- clears the per-buffer counters of the draw lists. */
typedef struct {
    int pad0[2];
    int w8;
    int pad1[2];
    int w14;
    int pad2[5];
    int w2C;
    int w30;
    unsigned char pad3[0x16D8];
} tDrawList;

extern tDrawList D_01F67E50[];

void DRAW_Init__Fv(void) {
    unsigned int i;

    for (i = 0; i < 1; i++) {
        D_01F67E50[i].w8 = 0;
        D_01F67E50[i].w30 = 0;
        D_01F67E50[i].w14 = 0;
        D_01F67E50[i].w2C = 0;
    }
}
