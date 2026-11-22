/* LEVEL_15:0x10E950 -- builds the scene: loads one table, resets a scratch object and the head object, fills the voice and slot arrays and finishes with the common setup. */
struct Link;

typedef struct {
    int w0;
    int w4;
    char pad_08[0x2C];
} Rec;

typedef struct {
    char pad_00[0xD0];
    Rec recs[10];
} Game;

typedef struct {
    char pad_00[0x118];
} Voice;

typedef struct {
    char pad_00[0x1C];
    char obj[0x18];
    char sub[0xB0];
    char src[0x0C];
    int w_F0[2];
    Voice voices[4];
} Scene;

extern char D_0015CB28[];
extern char D_001701C8[];
extern char D_00170098[];
extern char D_001700E0[];
extern Scene D_002EFDE8;
extern char D_002F0340[][0x20];
extern Game *D_002A8B58;

extern void func_13E8D8(char *a0);
extern void func_080488(struct Link *node, int value);
extern void func_029480(char *a0, unsigned int a1, unsigned int a2, int a3);
extern void func_029468(char *object);
extern void func_0294D8(char *object, int a, int b);
extern void func_13B130(char *a0, char *a1);
extern void func_13B4D0(char *dst, char *src, char *data, int flag);
extern void func_13B608(int *out, int first, int second);
extern void func_11D478(char *a0, int a1, int a2, char *a3);
extern void func_10E8E8(void);

void func_10E950(void)
{
    char tmp[0x18];
    Rec *cur;
    int i;

    func_13E8D8(D_0015CB28);
    func_080488((struct Link *)&D_002EFDE8, (int)D_001701C8);
    func_029480(tmp, 0xFFFFFFFF, 0xFFFFFFFF, 0);
    func_029468(tmp);
    cur = &D_002A8B58->recs[0];
    func_029480(D_002EFDE8.obj, 0xFFFFFFFF, 0xFFFFFFFF, 0);
    func_029468(D_002EFDE8.obj);
    func_0294D8(D_002EFDE8.sub, cur->w4, 0xFFFF);
    func_13B130(D_002EFDE8.src, (char *)cur);
    for (i = 0; i < 1; i++) {
        char *data = D_00170098 + i * 0x10;
        func_13B4D0(D_002F0340[i], D_002EFDE8.src, data, 1);
    }
    func_13B608(D_002EFDE8.w_F0, (int)D_002F0340[0], 1);
    {
        Voice *first = D_002EFDE8.voices;
        Voice *p = first;
        int k = 1;
        do {
            func_11D478((char *)p, (int)((char *)first - 0xDC), (int)D_001700E0, (char *)&D_002A8B58->recs[k]);
            p++;
            k++;
        } while (p < first + 4);
    }
    func_10E8E8();
}
