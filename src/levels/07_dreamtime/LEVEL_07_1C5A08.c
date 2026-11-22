/* LEVEL_07:0x1C5A08 -- steps two small state flags of a global record: the first fires once its counter reaches the object's count, the second waits for two handles to be reached in turn. */
typedef struct Handles {
    void *h[2];
    unsigned int count;
} Handles;

typedef struct Obj {
    char pad00[0x54];
    Handles *f54;
} Obj;

typedef struct Rec {
    char pad00[8];
    unsigned char b08;
    char pad09[3];
    unsigned char b0C;
    unsigned char b0D;
} Rec;

typedef struct Cam {
    char pad00[0x59C];
    char *f59C;
} Cam;

extern Rec D_00246830;
extern Cam D_0024AA40;
extern char D_0023DAA8[];

extern int func_086800(void *a, char *b);
extern void func_0BAFC8(void *first, void *second);
extern void func_027830(int index, unsigned char value, unsigned char bit);

void func_1C5A08(Obj *o)
{
    Handles *h;
    Cam *cam;

    cam = &D_0024AA40;
    h = o->f54;
    if (D_00246830.b0C == 1) {
        if (!(D_00246830.b08 < h->count)) {
            func_0BAFC8(D_0023DAA8, (void *)0x2B8);
            func_027830(0x7A, 0xFF, 0);
            D_00246830.b0C = 0x40;
        }
    }
    switch (D_00246830.b0D) {
    case 0:
        break;
    case 1:
        if (func_086800(h->h[0], cam->f59C + 0x30) != 0) {
            D_00246830.b0D = 2;
        }
        break;
    case 2:
        if (func_086800(h->h[1], cam->f59C + 0x30) != 0) {
            func_0BAFC8(D_0023DAA8, (void *)0x2B8);
            func_027830(0x7A, 0xFF, 1);
            D_00246830.b0D = 0x40;
        }
        break;
    case 0x40:
        break;
    case 0x80:
        break;
    }
}
