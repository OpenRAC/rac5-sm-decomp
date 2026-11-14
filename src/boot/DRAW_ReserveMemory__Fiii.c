/* DRAW_ReserveMemory__Fiii -- raises the reserved memory marks of every draw list that is not locked. */
typedef struct {
    int pad0[2];
    int w8;
    int pad1[2];
    int w14;
    int pad2[5];
    int w2C;
    int w30;
    unsigned char pad3[0x42];
    unsigned char locked;
    unsigned char pad4[0x1693];
} tDrawList;

extern tDrawList D_01F67E50[];

void DRAW_ReserveMemory__Fiii(int a, int b, int c) {
    int hb = b / 2;
    int hc = c / 2;
    unsigned int i;

    for (i = 0; i < 1; i++) {
        if (D_01F67E50[i].locked == 0) {
            if (D_01F67E50[i].w30 < a) {
                D_01F67E50[i].w30 = a;
            }
            if (D_01F67E50[i].w8 < hb) {
                D_01F67E50[i].w8 = hb;
            }
            if (D_01F67E50[i].w14 < hc) {
                D_01F67E50[i].w14 = hc;
            }
        }
    }
}
