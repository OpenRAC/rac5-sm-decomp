/* LEVEL_24:0x16D8A8 -- placement copy of LEVEL_01_18CFE0.c: opens the ATRAC stream named after the record's slot when streaming is enabled (otherwise stops the old one), then relocates the record's offset field. */
extern int sprintf(char *dst, const char *fmt, ...);
extern int SND_AtracOpen(const char *name) __asm__("SND_AtracOpen__FPCc");
extern void func_16DB58(void);
extern unsigned char D_001C6DEC;
extern int D_001D7A14;
extern int D_001D9680[];
extern int D_001EB570;
extern char D_001F10E0[];

struct Stream_18CFE0 {
    int w_00;
    int w_04;
    char pad_08[4];
    char opened;
    char failed;
};

struct Rec_18CFE0 {
    char slot;
    char pad_01[3];
    int w_04;
    char pad_08[8];
    int w_10;
};

struct Obj_18CFE0 {
    char pad_00[0x54];
    struct Rec_18CFE0 *rec;
    struct Stream_18CFE0 *stream;
};

int func_16D8A8(struct Obj_18CFE0 *a0)
{
    struct Stream_18CFE0 *s = a0->stream;
    struct Rec_18CFE0 *r = a0->rec;
    char buf[0x100];
    char *fmt;
    int v;
    int h;

    s->failed = 0;
    if (D_001C6DEC != 0) {
        s->opened = 0;
        fmt = D_001F10E0;
        v = r->w_10;
        if (v == -1) {
            v = D_001EB570;
        }
        sprintf(buf, fmt, v, (char)(r->slot + 0x41));
        h = SND_AtracOpen(buf);
        s->w_00 = 0;
        s->w_04 = h;
        if (h == 0) {
            s->opened = 1;
            return 0;
        }
    } else {
        func_16DB58();
    }
    D_001D9680[0] = 0x1E;
    if (r->w_04 != 0) {
        r->w_04 = D_001D7A14 + r->w_04;
    }
    return 1;
}
