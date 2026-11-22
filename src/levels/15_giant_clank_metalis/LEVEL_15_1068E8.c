/* LEVEL_15:0x1068E8 -- builds the scene: loads the two tables, resets the head and the sub-records, fills the voice and slot arrays and finishes with the common setup. */
struct Link;

typedef struct {
    int w0;
    int w4;
    char pad_08[0x0C];
    int w14;
    char pad_18[0x1C];
} Rec;

typedef struct {
    char pad_00[0x1D4];
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
    int w_F0[3];
    Voice voices[9];
} Scene;

extern char D_0015C3A0[];
extern char D_0015C540[];
extern char D_0016FD98[];
extern char D_0016FC48[];
extern char D_0016FCC0[];
extern Scene D_002ED948;
extern char D_002EE420[][0x20];
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
extern void func_106880(void);

void func_1068E8(void)
{
    Rec *cur;
    int i;

    func_13E8D8(D_0015C3A0);
    func_13E8D8(D_0015C540);
    func_080488((struct Link *)&D_002ED948, (int)D_0016FD98);
    cur = &D_002A8B58->recs[0];
    func_029480(D_002ED948.obj, 0xFFFFFFFF, 0xFFFFFFFF, 0);
    func_029468(D_002ED948.obj);
    func_0294D8(D_002ED948.sub, cur->w4, 0xFFFF);
    D_002ED948.w_F0[2] = cur->w14;
    func_13B130(D_002ED948.src, (char *)cur);
    for (i = 0; i < 1; i++) {
        char *data = D_0016FC48 + i * 0x10;
        func_13B4D0(D_002EE420[i], D_002ED948.src, data, 1);
    }
    func_13B608(D_002ED948.w_F0, (int)D_002EE420[0], 1);
    {
        Voice *first = D_002ED948.voices;
        Voice *p = first;
        int k = 1;
        do {
            func_11D478((char *)p, (int)((char *)first - 0xE0), (int)D_0016FCC0, (char *)&D_002A8B58->recs[k]);
            p++;
            k++;
        } while (p < first + 9);
    }
    func_106880();
}
