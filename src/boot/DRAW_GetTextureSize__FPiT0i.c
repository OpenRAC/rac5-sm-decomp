extern int TEXMGR_GetWidth__FUi(int fmt);
extern int TEXMGR_GetHeight__FUi(int fmt);

void DRAW_GetTextureSize__FPiT0i(int *w, int *h, int fmt) {
    switch (fmt) {
    case 0x7FE:
        *w = 0x200;
        *h = 0x1A0;
        break;
    case 0x7FD:
        *w = 0x80;
        *h = 0x40;
        break;
    case 0x7FC:
        *w = 1;
        *h = 1;
        break;
    default:
        *w = TEXMGR_GetWidth__FUi(fmt);
        *h = TEXMGR_GetHeight__FUi(fmt);
        break;
    }
}
