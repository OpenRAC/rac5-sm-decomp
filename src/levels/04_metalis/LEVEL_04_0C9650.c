/* LEVEL_04:0x0C9650 -- placement copy of LEVEL_01_0C3E38.c: sets up one global object with fixed parameters, then registers thirteen numbered entries on it and marks it ready. */

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

extern Obj D_003439B0;
extern int D_0021984C;
extern Game *D_0020D12C;

extern void func_0BF2F8(Obj *o, int a, unsigned int b, int c);
extern void func_0B3958(int id, Pair *out, float f);
extern void func_0BF670(Obj *o, int a, int b, int c, int d);
extern void func_0BF658(Obj *o, int a, unsigned int b);
extern int func_0BF178(char *object, int first, int second);
extern int func_0BF258(Obj *o, int a, int b);
extern int func_13E930(int i);
extern int func_0BFA20(Obj *o, int a, int b, int c, int d, int e, int f, int g, unsigned int h);
extern int func_0BF3F0(Obj *o);

void func_0C9650(void)
{
    Pair buf[4];
    unsigned int i;
    int v;
    int j;

    func_0BF2F8(&D_003439B0, D_0021984C, 0x20800, 0);
    func_0B3958(0x1FB, buf, 0.0f);
    func_0BF670(&D_003439B0, buf[0].v, buf[1].v, buf[2].v, buf[3].v);
    func_0BF658(&D_003439B0, 0x1FA, 0xFFFFFFFF);
    func_0BF178(&D_003439B0, 0x40602020, 0xFFB07050);
    for (i = 0xBB9; i < 0xBC6; i++) {
        j = i - 0xBB8;
        func_0BF258(&D_003439B0, 1, 1);
        v = i + 15;
        if (v == 0xBCA) {
            if (D_0020D12C->mode_24 == 2) {
                v = 0xBD6;
            }
        }
        func_0BFA20(&D_003439B0, func_13E930(i), v, j, 0, 0, 1, 0, 0xFFFFFFFF);
    }
    D_003439B0.flags_14 |= 0x14;
    func_0BF3F0(&D_003439B0);
}
