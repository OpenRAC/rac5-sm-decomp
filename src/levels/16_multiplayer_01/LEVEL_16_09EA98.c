/* LEVEL_16:0x09EA98 -- placement copy of LEVEL_01_0B02C0.c: draws a debug glyph table and two panels depending on global flags. */
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

extern unsigned char D_001A9F9D;
extern int D_001A9FA0;
extern unsigned char D_001AA158;
extern int D_001AA15C;
extern unsigned char D_001AA160;
extern char D_001C6138[];

extern void func_09B838(int, int, int, int, int, unsigned int);
extern void func_097FB0(short, short, char *);
extern int func_10F330(int);
extern void func_099BF0(Panel *);
extern void func_097360(int);

void func_09EA98(void)
{
    Scratch u;

    if (D_001A9F9D) {
        func_09B838(D_001A9FA0, 0, 0, 0x100, 0x100, 0xFFFFFFFF);
    } else {
        unsigned int i, j;

        for (i = 0; i < 16; i++) {
            for (j = 0; j < 16; j++) {
                u.buf[0] = j + i * 16;
                u.buf[1] = 0;
                func_097FB0(16 + j * 16, i * 16 - 8, u.buf);
            }
        }
        u.buf[0] = D_001AA158;
        u.buf[1] = 0;
        func_097FB0(0x190, 0xC8, u.buf);
        memset(&u.s.p, 0, sizeof(Panel));
        u.s.p.x = 0x10;
        u.s.p.y = 0xD0;
        u.s.p.w = 0x1D0;
        u.s.p.h = 0x100;
        u.s.p.tex = func_10F330(D_001AA15C);
        func_099BF0(&u.s.p);
    }
    func_097360(0xFF80FF80);
    if (D_001AA160) {
        memset(&u.q, 0, sizeof(Panel));
        u.q.x = 0xF0;
        u.q.y = 0x88;
        u.q.w = 0x1E0;
        u.q.h = 0x110;
        u.q.tex = (int)D_001C6138;
        func_099BF0(&u.q);
    }
}
