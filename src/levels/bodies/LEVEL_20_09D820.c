/* LEVEL_20:0x09D820 -- placement copy of LEVEL_01_0C3E38.c: sets up one global object with fixed parameters, then registers thirteen numbered entries on it and marks it ready. */

typedef struct {
    short v;
    short pad;
} Pair;

typedef struct {
    char pad_00[0x14];
    unsigned int flags_14;
} Obj;

typedef struct {
    char pad_00[0x24];
    int mode_24;
} Game;

extern Obj D_0019A930;
extern int D_00110AE4;
extern Game *D_00104194;

extern void func_093098(Obj *o, int a, unsigned int b, int c);
extern void func_0874F0(int id, Pair *out, float f);
extern void func_093410(Obj *o, int a, int b, int c, int d);
extern void func_0933F8(Obj *o, int a, unsigned int b);
extern int func_092F18(char *object, int first, int second);
extern int func_092FF8(Obj *o, int a, int b);
extern int func_0E2118(int i);
extern int func_0937C0(Obj *o, int a, int b, int c, int d, int e, int f, int g, unsigned int h);
extern int func_093190(Obj *o);

void func_09D820(void)
{
    Pair buf[4];
    unsigned int i;
    int v;
    int j;

    func_093098(&D_0019A930, D_00110AE4, 0x20800, 0);
    func_0874F0(0x1FB, buf, 0.0f);
    func_093410(&D_0019A930, buf[0].v, buf[1].v, buf[2].v, buf[3].v);
    func_0933F8(&D_0019A930, 0x1FA, 0xFFFFFFFF);
    func_092F18(&D_0019A930, 0x40602020, 0xFFB07050);
    for (i = 0xBB9; i < 0xBC6; i++) {
        j = i - 0xBB8;
        func_092FF8(&D_0019A930, 1, 1);
        v = i + 15;
        if (v == 0xBCA) {
            if (D_00104194->mode_24 == 2) {
                v = 0xBD6;
            }
        }
        func_0937C0(&D_0019A930, func_0E2118(i), v, j, 0, 0, 1, 0, 0xFFFFFFFF);
    }
    D_0019A930.flags_14 |= 0x14;
    func_093190(&D_0019A930);
}
