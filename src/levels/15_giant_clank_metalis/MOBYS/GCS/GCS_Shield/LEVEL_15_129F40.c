/* LEVEL_15:0x129F40 -- binds a source object, initializes its two sub-entries and allocates a grid buffer. */
typedef struct {
    char pad0[0x1C];
    char ent[2][0xBC];
    char pad194[4];
    int h198;
    int w19C;
    float f1A0;
    float f1A4;
    float f1A8;
} Src129F40;

typedef struct {
    Src129F40 *src;
    char pad4[0x10];
    void *buf;
    int count;
} Dst129F40b;

extern char D_00170DE0[];
extern void func_1296D0(void *e);
extern void func_129D90(Dst129F40b *d, Src129F40 *s);
extern void *func_0D4F30(int a, int b, int c, char *name, int line);
extern void func_07F068(void *buf, int n, int h, int w, float x, float y, float z);

void func_129F40(Dst129F40b *d, Src129F40 *s)
{
    unsigned int i;
    int n;
    void *buf;

    d->src = s;
    for (i = 0; i < 2; i++)
        func_1296D0(s->ent[i]);
    func_129D90(d, s);
    n = ((s->w19C + 1) * 2 + 1) * (s->h198 - 1) - 1;
    buf = func_0D4F30(16, n * 0x30, 0, D_00170DE0, 0x176);
    func_07F068(buf, n, s->h198, s->w19C, s->f1A0, s->f1A4, s->f1A8);
    d->buf = buf;
    d->count = n;
}
