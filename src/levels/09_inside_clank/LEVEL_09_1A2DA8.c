/* LEVEL_09:0x1A2DA8 -- steps two small state flags of a global record: state 1 waits for a handle to be reached, state 2 reports it and leaves the final value. */
typedef struct Handles {
    void *h[4];
} Handles;

typedef struct Obj {
    char pad00[0x54];
    Handles *f54;
} Obj;

typedef struct Rec {
    char pad00[4];
    unsigned char b04;
    char pad05[7];
    unsigned char b0C;
    unsigned char b0D;
} Rec;

typedef struct Cam {
    char pad00[0x59C];
    char *f59C;
} Cam;

extern Rec D_002186B0;
extern Cam D_0021C8C0;
extern char D_0020FB50[];

extern int func_0810E8(void *a, char *b);
extern void func_0B6218(void *first, void *second);
extern void func_0264D8(int index, unsigned char value, unsigned char bit);

void func_1A2DA8(Obj *o)
{
    Handles *h;
    Cam *cam;

    h = o->f54;
    cam = &D_0021C8C0;
    switch (D_002186B0.b0C) {
    case 0:
        break;
    case 1:
        if (func_0810E8(h->h[0], cam->f59C + 0x30) != 0) {
            D_002186B0.b0C = 2;
            D_002186B0.b04 = 0;
        }
        break;
    case 2:
        if (D_002186B0.b04 != 0) {
            D_002186B0.b0C = 0x80;
        }
        if (func_0810E8(h->h[1], cam->f59C + 0x30) != 0) {
            do {
                func_0B6218(D_0020FB50, (void *)0x2B8);
                func_0264D8(0x7B, 0xFF, 0);
            } while (0);
            D_002186B0.b0C = 0x40;
        }
        break;
    case 0x40:
        break;
    case 0x80:
        break;
    }
    switch (D_002186B0.b0D) {
    case 0:
        break;
    case 1:
        if (func_0810E8(h->h[2], cam->f59C + 0x30) != 0) {
            D_002186B0.b0D = 2;
        }
        break;
    case 2:
        if (func_0810E8(h->h[3], cam->f59C + 0x30) != 0) {
            func_0B6218(D_0020FB50, (void *)0x2B8);
            func_0264D8(0x7B, 0xFF, 1);
            D_002186B0.b0D = 0x40;
        }
        break;
    case 0x40:
        break;
    case 0x80:
        break;
    }
}
