/* DRAW_RenderBegin__FUi -- flips the double buffer of a draw list and sets its current and limit pointers. */
typedef struct {
    int pad0[3];
    int tab[2];
    int w14;
    int cur;
    int limit;
    int flip;
    unsigned char pad[0x16E8];
} tDrawList;

extern tDrawList D_01F67E50[];

void DRAW_RenderBegin__FUi(unsigned int index) {
    D_01F67E50[index].flip ^= 1;
    D_01F67E50[index].cur = D_01F67E50[index].tab[D_01F67E50[index].flip];
    D_01F67E50[index].limit = D_01F67E50[index].cur + D_01F67E50[index].w14 - 0x80;
}
