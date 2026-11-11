/* LEVEL_04:0x0B5510 -- placement copy of LEVEL_01_0B02C0.c: draws a debug glyph table and two panels depending on global flags. */
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

extern unsigned char D_0021549D;
extern int D_002154A0;
extern unsigned char D_002155D8;
extern int D_002155DC;
extern unsigned char D_002155E0;
extern char D_0022AD88[];

extern void func_0B2398(int, int, int, int, int, unsigned int);
extern void func_0AEB10(short, short, char *);
extern int func_13E930(int);
extern void func_0B0750(Panel *);
extern void func_0ADEF0(int);

void func_0B5510(void)
{
    Scratch u;

    if (D_0021549D) {
        func_0B2398(D_002154A0, 0, 0, 0x100, 0x100, 0xFFFFFFFF);
    } else {
        unsigned int i, j;

        for (i = 0; i < 16; i++) {
            for (j = 0; j < 16; j++) {
                u.buf[0] = j + i * 16;
                u.buf[1] = 0;
                func_0AEB10(16 + j * 16, i * 16 - 8, u.buf);
            }
        }
        u.buf[0] = D_002155D8;
        u.buf[1] = 0;
        func_0AEB10(0x190, 0xC8, u.buf);
        memset(&u.s.p, 0, sizeof(Panel));
        u.s.p.x = 0x10;
        u.s.p.y = 0xD0;
        u.s.p.w = 0x1D0;
        u.s.p.h = 0x100;
        u.s.p.tex = func_13E930(D_002155DC);
        func_0B0750(&u.s.p);
    }
    func_0ADEF0(0xFF80FF80);
    if (D_002155E0) {
        memset(&u.q, 0, sizeof(Panel));
        u.q.x = 0xF0;
        u.q.y = 0x88;
        u.q.w = 0x1E0;
        u.q.h = 0x110;
        u.q.tex = (int)D_0022AD88;
        func_0B0750(&u.q);
    }
}
