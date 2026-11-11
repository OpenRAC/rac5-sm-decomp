/* LEVEL_05:0x0AE880 -- placement copy of LEVEL_01_0B02C0.c: draws a debug glyph table and two panels depending on global flags. */
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

extern unsigned char D_001EB35D;
extern int D_001EB360;
extern unsigned char D_001EB498;
extern int D_001EB49C;
extern unsigned char D_001EB4A0;
extern char D_00200308[];

extern void func_0AB708(int, int, int, int, int, unsigned int);
extern void func_0A7E80(short, short, char *);
extern int func_12DE28(int);
extern void func_0A9AC0(Panel *);
extern void func_0A7260(int);

void func_0AE880(void)
{
    Scratch u;

    if (D_001EB35D) {
        func_0AB708(D_001EB360, 0, 0, 0x100, 0x100, 0xFFFFFFFF);
    } else {
        unsigned int i, j;

        for (i = 0; i < 16; i++) {
            for (j = 0; j < 16; j++) {
                u.buf[0] = j + i * 16;
                u.buf[1] = 0;
                func_0A7E80(16 + j * 16, i * 16 - 8, u.buf);
            }
        }
        u.buf[0] = D_001EB498;
        u.buf[1] = 0;
        func_0A7E80(0x190, 0xC8, u.buf);
        memset(&u.s.p, 0, sizeof(Panel));
        u.s.p.x = 0x10;
        u.s.p.y = 0xD0;
        u.s.p.w = 0x1D0;
        u.s.p.h = 0x100;
        u.s.p.tex = func_12DE28(D_001EB49C);
        func_0A9AC0(&u.s.p);
    }
    func_0A7260(0xFF80FF80);
    if (D_001EB4A0) {
        memset(&u.q, 0, sizeof(Panel));
        u.q.x = 0xF0;
        u.q.y = 0x88;
        u.q.w = 0x1E0;
        u.q.h = 0x110;
        u.q.tex = (int)D_00200308;
        func_0A9AC0(&u.q);
    }
}
