/* LEVEL_05:0x0C23E0 -- placement copy of LEVEL_01_0C3E38.c: sets up one global object with fixed parameters, then registers thirteen numbered entries on it and marks it ready. */

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

extern Obj D_00315070;
extern int D_001EF70C;
extern Game *D_001E332C;

extern void func_0B80C0(Obj *o, int a, unsigned int b, int c);
extern void func_0ACCC8(int id, Pair *out, float f);
extern void func_0B8438(Obj *o, int a, int b, int c, int d);
extern void func_0B8420(Obj *o, int a, unsigned int b);
extern int func_0B7F40(char *object, int first, int second);
extern int func_0B8020(Obj *o, int a, int b);
extern int func_12DE28(int i);
extern int func_0B87E8(Obj *o, int a, int b, int c, int d, int e, int f, int g, unsigned int h);
extern int func_0B81B8(Obj *o);

void func_0C23E0(void)
{
    Pair buf[4];
    unsigned int i;
    int v;
    int j;

    func_0B80C0(&D_00315070, D_001EF70C, 0x20800, 0);
    func_0ACCC8(0x1FB, buf, 0.0f);
    func_0B8438(&D_00315070, buf[0].v, buf[1].v, buf[2].v, buf[3].v);
    func_0B8420(&D_00315070, 0x1FA, 0xFFFFFFFF);
    func_0B7F40(&D_00315070, 0x40602020, 0xFFB07050);
    for (i = 0xBB9; i < 0xBC6; i++) {
        j = i - 0xBB8;
        func_0B8020(&D_00315070, 1, 1);
        v = i + 15;
        if (v == 0xBCA) {
            if (D_001E332C->mode_24 == 2) {
                v = 0xBD6;
            }
        }
        func_0B87E8(&D_00315070, func_12DE28(i), v, j, 0, 0, 1, 0, 0xFFFFFFFF);
    }
    D_00315070.flags_14 |= 0x14;
    func_0B81B8(&D_00315070);
}
