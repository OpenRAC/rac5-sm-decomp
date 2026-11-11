/* LEVEL_20:0x089190 -- placement copy of LEVEL_01_0B02C0.c: draws a debug glyph table and two panels depending on global flags. */
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

extern unsigned char D_0010C67D;
extern int D_0010C680;
extern unsigned char D_0010C838;
extern int D_0010C83C;
extern unsigned char D_0010C840;
extern char D_001271B8[];

extern void func_085F30(int, int, int, int, int, unsigned int);
extern void func_0826A8(short, short, char *);
extern int func_0E2118(int);
extern void func_0842E8(Panel *);
extern void func_081A58(int);

void func_089190(void)
{
    Scratch u;

    if (D_0010C67D) {
        func_085F30(D_0010C680, 0, 0, 0x100, 0x100, 0xFFFFFFFF);
    } else {
        unsigned int i, j;

        for (i = 0; i < 16; i++) {
            for (j = 0; j < 16; j++) {
                u.buf[0] = j + i * 16;
                u.buf[1] = 0;
                func_0826A8(16 + j * 16, i * 16 - 8, u.buf);
            }
        }
        u.buf[0] = D_0010C838;
        u.buf[1] = 0;
        func_0826A8(0x190, 0xC8, u.buf);
        memset(&u.s.p, 0, sizeof(Panel));
        u.s.p.x = 0x10;
        u.s.p.y = 0xD0;
        u.s.p.w = 0x1D0;
        u.s.p.h = 0x100;
        u.s.p.tex = func_0E2118(D_0010C83C);
        func_0842E8(&u.s.p);
    }
    func_081A58(0xFF80FF80);
    if (D_0010C840) {
        memset(&u.q, 0, sizeof(Panel));
        u.q.x = 0xF0;
        u.q.y = 0x88;
        u.q.w = 0x1E0;
        u.q.h = 0x110;
        u.q.tex = (int)D_001271B8;
        func_0842E8(&u.q);
    }
}
