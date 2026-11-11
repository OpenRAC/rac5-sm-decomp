/* LEVEL_20:0x09DD80 -- placement copy of LEVEL_01_0C4398.c: initialises the scene object and registers the tabled entries from the highest id downwards. */

struct Obj {
    char pad_00[0x14];
    unsigned int flags_14;
};

extern struct Obj D_0019AA40;
extern int D_00110AF4;

extern void func_093098(struct Obj *o, int a, int b, int c);
extern void func_0874F0(int a, void *buf, float f);
extern void func_093410(struct Obj *o, int a, int b, int c, int d);
extern void func_0933F8(struct Obj *o, int a, unsigned int b);
extern int func_092F18(char *object, int first, int second);
extern int func_092FF8(struct Obj *o, int a, int b);
extern int func_08C618(int k);
extern int func_0E2118(int id);
extern int func_0937C0(struct Obj *o, int id, int k, int a, int b, int c, int d, int e, unsigned int f);
extern int func_093190(struct Obj *o);

void func_09DD80(void)
{
    int buf[4];
    int i;
    int k;

    func_093098(&D_0019AA40, D_00110AF4, 0x20800, 0);
    func_0874F0(0x1FB, buf, 0.0f);
    func_093410(&D_0019AA40, (short)buf[0], (short)buf[1], (short)buf[2], (short)buf[3]);
    func_0933F8(&D_0019AA40, 0x1FA, 0xFFFFFFFF);
    func_092F18(&D_0019AA40, 0x40602020, 0xFFB07050);
    for (i = 0x93; i >= 3; i--) {
        k = -i;
        if (func_08C618(k) != 0) {
            if (k != -0x88) {
                func_092FF8(&D_0019AA40, 1, 1);
                func_0937C0(&D_0019AA40, func_0E2118(i + 0x7CF), k, 0, 0, 0, 1, 0, 0xFFFFFFFF);
            }
        }
    }
    D_0019AA40.flags_14 |= 0x14;
    func_093190(&D_0019AA40);
}
