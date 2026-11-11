/* LEVEL_03:0x07A1F8 -- placement copy of LEVEL_01_07A400.c: drops stale table entries by moving the last entry into their slot. */
typedef struct {
    char pad0[0x64];
    unsigned int w64;
} Owner;
typedef struct {
    Owner *w0;
    int w4;
    int w8;
    float wC;
    int w10;
    int w14;
} Ent;
extern int D_0020E7A0;
extern int D_0020C638;
extern unsigned int D_0020E798;
extern Ent D_00255330[];

void func_07A1F8(void)
{
    unsigned int i;

    if (D_0020E7A0 != D_0020C638) {
        for (i = 0; i < D_0020E798; i++) {
            if (D_00255330[i].w14 == 3 || D_00255330[i].w0 == 0 || (D_00255330[i].w0->w64 & 0xF) != 1) {
                if (i == D_0020E798 - 1) {
                    D_0020E798 = i;
                } else {
                    D_0020E798 = D_0020E798 - 1;
                    D_00255330[i].w0 = D_00255330[D_0020E798].w0;
                    D_00255330[i].w8 = D_00255330[D_0020E798].w8;
                    D_00255330[i].wC = D_00255330[D_0020E798].wC;
                    D_00255330[i].w10 = D_00255330[D_0020E798].w10;
                    D_00255330[i].w14 = D_00255330[D_0020E798].w14;
                }
            }
        }
    }
}
