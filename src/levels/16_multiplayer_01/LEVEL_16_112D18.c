/* LEVEL_16:0x112D18 -- finds the slot whose id matches the object's table entry key and returns the address of that slot's record row for the object's variant, or null. */
typedef struct Ent { char pad00[0x20]; int key; char pad24[0x10]; } Ent;
typedef struct Tab { char pad00[4]; Ent *ents; } Tab;
typedef struct Sub { char pad00[0xC]; int w0C; } Sub;
typedef struct Obj { char pad00[0x40]; Tab *f40; unsigned char b44; char pad45[3]; Sub *f48; } Obj;
extern unsigned int D_001B4C84;
extern int D_001B4C48[];
extern char D_001B4CA8[];
char *func_112D18(Obj *o)
{
    unsigned int i;
    for (i = 0; i < D_001B4C84; i++) {
        if (D_001B4C48[i] == o->f40->ents[o->b44].key) {
            return i * 0x3FC + D_001B4CA8 + o->f48->w0C * 255;
        }
    }
    return 0;
}
