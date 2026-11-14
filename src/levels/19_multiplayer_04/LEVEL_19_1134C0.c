/* LEVEL_19:0x1134C0 -- placement copy of LEVEL_16_112D18.c: finds the slot whose id matches the object's table entry key and returns the address of that slot's record row for the object's variant, or null. */
typedef struct Ent { char pad00[0x20]; int key; char pad24[0x10]; } Ent;
typedef struct Tab { char pad00[4]; Ent *ents; } Tab;
typedef struct Sub { char pad00[0xC]; int w0C; } Sub;
typedef struct Obj { char pad00[0x40]; Tab *f40; unsigned char b44; char pad45[3]; Sub *f48; } Obj;
extern unsigned int D_001B5E04;
extern int D_001B5DC8[];
extern char D_001B5E28[];
char *func_1134C0(Obj *o)
{
    unsigned int i;
    for (i = 0; i < D_001B5E04; i++) {
        if (D_001B5DC8[i] == o->f40->ents[o->b44].key) {
            return i * 0x3FC + D_001B5E28 + o->f48->w0C * 255;
        }
    }
    return 0;
}
