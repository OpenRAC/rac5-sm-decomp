/* LEVEL_17:0x09DF90 -- placement copy of LEVEL_01_0B02C0.c: draws a debug glyph table and two panels depending on global flags. */
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

extern unsigned char D_0019D59D;
extern int D_0019D5A0;
extern unsigned char D_0019D758;
extern int D_0019D75C;
extern unsigned char D_0019D760;
extern char D_001B95B8[];

extern void func_09AD30(int, int, int, int, int, unsigned int);
extern void func_0974A8(short, short, char *);
extern int func_10E8A8(int);
extern void func_0990E8(Panel *);
extern void func_096858(int);

void func_09DF90(void)
{
    Scratch u;

    if (D_0019D59D) {
        func_09AD30(D_0019D5A0, 0, 0, 0x100, 0x100, 0xFFFFFFFF);
    } else {
        unsigned int i, j;

        for (i = 0; i < 16; i++) {
            for (j = 0; j < 16; j++) {
                u.buf[0] = j + i * 16;
                u.buf[1] = 0;
                func_0974A8(16 + j * 16, i * 16 - 8, u.buf);
            }
        }
        u.buf[0] = D_0019D758;
        u.buf[1] = 0;
        func_0974A8(0x190, 0xC8, u.buf);
        memset(&u.s.p, 0, sizeof(Panel));
        u.s.p.x = 0x10;
        u.s.p.y = 0xD0;
        u.s.p.w = 0x1D0;
        u.s.p.h = 0x100;
        u.s.p.tex = func_10E8A8(D_0019D75C);
        func_0990E8(&u.s.p);
    }
    func_096858(0xFF80FF80);
    if (D_0019D760) {
        memset(&u.q, 0, sizeof(Panel));
        u.q.x = 0xF0;
        u.q.y = 0x88;
        u.q.w = 0x1E0;
        u.q.h = 0x110;
        u.q.tex = (int)D_001B95B8;
        func_0990E8(&u.q);
    }
}
