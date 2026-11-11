/* LEVEL_23:0x0A7030 -- placement copy of LEVEL_01_0B02C0.c: draws a debug glyph table and two panels depending on global flags. */
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

extern unsigned char D_001CF3DD;
extern int D_001CF3E0;
extern unsigned char D_001CF518;
extern int D_001CF51C;
extern unsigned char D_001CF520;
extern char D_001E4588[];

extern void func_0A3EB8(int, int, int, int, int, unsigned int);
extern void func_0A0630(short, short, char *);
extern int func_123C28(int);
extern void func_0A2270(Panel *);
extern void func_09FA10(int);

void func_0A7030(void)
{
    Scratch u;

    if (D_001CF3DD) {
        func_0A3EB8(D_001CF3E0, 0, 0, 0x100, 0x100, 0xFFFFFFFF);
    } else {
        unsigned int i, j;

        for (i = 0; i < 16; i++) {
            for (j = 0; j < 16; j++) {
                u.buf[0] = j + i * 16;
                u.buf[1] = 0;
                func_0A0630(16 + j * 16, i * 16 - 8, u.buf);
            }
        }
        u.buf[0] = D_001CF518;
        u.buf[1] = 0;
        func_0A0630(0x190, 0xC8, u.buf);
        memset(&u.s.p, 0, sizeof(Panel));
        u.s.p.x = 0x10;
        u.s.p.y = 0xD0;
        u.s.p.w = 0x1D0;
        u.s.p.h = 0x100;
        u.s.p.tex = func_123C28(D_001CF51C);
        func_0A2270(&u.s.p);
    }
    func_09FA10(0xFF80FF80);
    if (D_001CF520) {
        memset(&u.q, 0, sizeof(Panel));
        u.q.x = 0xF0;
        u.q.y = 0x88;
        u.q.w = 0x1E0;
        u.q.h = 0x110;
        u.q.tex = (int)D_001E4588;
        func_0A2270(&u.q);
    }
}
