/* LEVEL_21:0x13A718 -- placement copy of LEVEL_01_18CFE0.c: opens the ATRAC stream named after the record's slot when streaming is enabled (otherwise stops the old one), then relocates the record's offset field. */
extern int sprintf(char *dst, const char *fmt, ...);
extern int SND_AtracOpen(const char *name) __asm__("SND_AtracOpen__FPCc");
extern void func_13A9C8(void);
extern unsigned char D_0014ADEC;
extern int D_0015B714;
extern int D_0015E310[];
extern int D_0016EF70;
extern char D_00173198[];

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

int func_13A718(struct Obj_18CFE0 *a0)
{
    struct Stream_18CFE0 *s = a0->stream;
    struct Rec_18CFE0 *r = a0->rec;
    char buf[0x100];
    char *fmt;
    int v;
    int h;

    s->failed = 0;
    if (D_0014ADEC != 0) {
        s->opened = 0;
        fmt = D_00173198;
        v = r->w_10;
        if (v == -1) {
            v = D_0016EF70;
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
        func_13A9C8();
    }
    D_0015E310[0] = 0x1E;
    if (r->w_04 != 0) {
        r->w_04 = D_0015B714 + r->w_04;
    }
    return 1;
}
