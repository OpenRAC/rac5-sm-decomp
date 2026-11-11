/* LEVEL_05:0x19BD18 -- placement copy of LEVEL_01_19DA18.c: applies six slot settings, then refreshes the object's handle. */
typedef struct Obj {
    char pad0[0x5D0];
    int handle;
} Obj;

typedef struct Cfg {
    char pad0[0x854];
    unsigned char slot[6];
} Cfg;

extern Cfg *D_001E332C;
extern int D_001FA378[];

extern void func_038180(Obj *o, int i);
extern void func_0381F8(Obj *o, int i, int v);
extern int func_000A80(void);
extern void func_0008F8(int h, int a);
extern void func_19BCE0(Obj *o);
extern int func_026148(int a, int b);
extern void func_039C18(int a);

void func_19BD18(Obj *o, int flag, int arg)
{
    unsigned int i;
    int h;

    for (i = 0; i < 6; i++) {
        unsigned char s = D_001E332C->slot[i];
        if (s == 0) {
            func_038180(o, i);
        } else {
            func_0381F8(o, i, D_001FA378[s]);
        }
    }
    h = func_000A80();
    o->handle = h;
    if (flag != 0) {
        if (h != 0) {
            func_0008F8(h, arg);
        }
    }
    func_19BCE0(o);
    if (func_026148(0x9B, 0xFF) != 0) {
        func_039C18(0);
    }
}
