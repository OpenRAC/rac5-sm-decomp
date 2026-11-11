/* LEVEL_18:0x09DAA8 -- placement copy of LEVEL_01_0B02C0.c: draws a debug glyph table and two panels depending on global flags. */
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

extern unsigned char D_001AB41D;
extern int D_001AB420;
extern unsigned char D_001AB5D8;
extern int D_001AB5DC;
extern unsigned char D_001AB5E0;
extern char D_001C76B8[];

extern void func_09A848(int, int, int, int, int, unsigned int);
extern void func_096FC0(short, short, char *);
extern int func_10DFE0(int);
extern void func_098C00(Panel *);
extern void func_096370(int);

void func_09DAA8(void)
{
    Scratch u;

    if (D_001AB41D) {
        func_09A848(D_001AB420, 0, 0, 0x100, 0x100, 0xFFFFFFFF);
    } else {
        unsigned int i, j;

        for (i = 0; i < 16; i++) {
            for (j = 0; j < 16; j++) {
                u.buf[0] = j + i * 16;
                u.buf[1] = 0;
                func_096FC0(16 + j * 16, i * 16 - 8, u.buf);
            }
        }
        u.buf[0] = D_001AB5D8;
        u.buf[1] = 0;
        func_096FC0(0x190, 0xC8, u.buf);
        memset(&u.s.p, 0, sizeof(Panel));
        u.s.p.x = 0x10;
        u.s.p.y = 0xD0;
        u.s.p.w = 0x1D0;
        u.s.p.h = 0x100;
        u.s.p.tex = func_10DFE0(D_001AB5DC);
        func_098C00(&u.s.p);
    }
    func_096370(0xFF80FF80);
    if (D_001AB5E0) {
        memset(&u.q, 0, sizeof(Panel));
        u.q.x = 0xF0;
        u.q.y = 0x88;
        u.q.w = 0x1E0;
        u.q.h = 0x110;
        u.q.tex = (int)D_001C76B8;
        func_098C00(&u.q);
    }
}
