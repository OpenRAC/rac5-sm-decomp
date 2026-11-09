/* LEVEL_21:0x090B88 -- placement copy of LEVEL_01_0B02C0.c: draws a debug glyph table and two panels depending on global flags. */
extern void *memset(void *p, int c, unsigned int n);

typedef struct {
    int x;
    int y;
    int w;
    int h;
    int pad10;
    int tex;
    int rest[15];
} Panel;

typedef union {
    char buf[16];
    Panel q;
    struct {
        char pad[16];
        Panel p;
    } s;
} Scratch;

extern unsigned char D_00150C5D;
extern int D_00150C60;
extern unsigned char D_00150D98;
extern int D_00150D9C;
extern unsigned char D_00150DA0;
extern char D_00165B88[];

extern void func_08DA10(int, int, int, int, int, unsigned int);
extern void func_08A188(short, short, char *);
extern int func_0F1378(int);
extern void func_08BDC8(Panel *);
extern void func_089568(int);

void func_090B88(void)
{
    Scratch u;

    if (D_00150C5D) {
        func_08DA10(D_00150C60, 0, 0, 0x100, 0x100, 0xFFFFFFFF);
    } else {
        unsigned int i, j;

        for (i = 0; i < 16; i++) {
            for (j = 0; j < 16; j++) {
                u.buf[0] = j + i * 16;
                u.buf[1] = 0;
                func_08A188(16 + j * 16, i * 16 - 8, u.buf);
            }
        }
        u.buf[0] = D_00150D98;
        u.buf[1] = 0;
        func_08A188(0x190, 0xC8, u.buf);
        memset(&u.s.p, 0, sizeof(Panel));
        u.s.p.x = 0x10;
        u.s.p.y = 0xD0;
        u.s.p.w = 0x1D0;
        u.s.p.h = 0x100;
        u.s.p.tex = func_0F1378(D_00150D9C);
        func_08BDC8(&u.s.p);
    }
    func_089568(0xFF80FF80);
    if (D_00150DA0) {
        memset(&u.q, 0, sizeof(Panel));
        u.q.x = 0xF0;
        u.q.y = 0x88;
        u.q.w = 0x1E0;
        u.q.h = 0x110;
        u.q.tex = (int)D_00165B88;
        func_08BDC8(&u.q);
    }
}
