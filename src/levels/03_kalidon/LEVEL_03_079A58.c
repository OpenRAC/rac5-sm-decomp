/* LEVEL_03:0x079A58 -- placement copy of LEVEL_01_079C60.c: duplicates matching table entries under a new key. */
typedef struct {
    int key;
    unsigned char b;
    int c;
    float d;
    int e;
    int f;
} E;
extern unsigned D_0020E798;
extern E D_00255330[];

void func_079A58(int a, int b)
{
    unsigned i;
    if (D_0020E798 < 16) {
        for (i = 0; i < D_0020E798; i++) {
            if (D_00255330[i].key == b) {
                D_00255330[D_0020E798].key = a;
                D_00255330[D_0020E798].b = D_00255330[i].b;
                D_00255330[D_0020E798].c = D_00255330[i].c;
                D_00255330[D_0020E798].d = D_00255330[i].d;
                D_00255330[D_0020E798].e = D_00255330[i].e;
                D_00255330[D_0020E798].f = D_00255330[i].f;
                D_0020E798++;
            }
        }
    }
}
