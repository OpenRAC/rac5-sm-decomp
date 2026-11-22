/* LEVEL_01:0x18B628 -- rebases the eight stored offsets of the object's table on the global base pointer, then looks up the handles for the current mode (1, 2 or default) and stores them in its record; succeeds when the first handle exists. */
struct Rec {
    int w0;
    int w4;
    int w8;
    int wC;
};

struct Obj {
    char pad00[0x54];
    unsigned int *tab;
    struct Rec *rec;
    char pad5C[0x14];
    float f70;
};

extern unsigned char *D_00206D94;
extern int D_0021A7F0;
extern int D_002085C4;
extern int func_12A068(unsigned int value);

int func_18B628(struct Obj *o)
{
    unsigned int *p;
    struct Rec *rec;
    unsigned int i;
    unsigned int j;
    char *q;

    p = o->tab;
    for (i = 0; i < 4; i++) {
        if (*(unsigned int *)((char *)p + i * 4) != 0) {
            *(unsigned int *)((char *)p + i * 4) = (unsigned int)D_00206D94 + *(unsigned int *)((char *)p + i * 4);
        }
    }
    q = (char *)p + 16;
    for (j = 0; j < 4; j++) {
        if (*(unsigned int *)(q + j * 4) != 0) {
            *(unsigned int *)(q + j * 4) = (unsigned int)D_00206D94 + *(unsigned int *)(q + j * 4);
        }
    }
    rec = o->rec;
    rec->w8 = 0;
    if (D_0021A7F0 == 1) {
        rec->w4 = func_12A068(0xBB0A8211u);
        rec->w8 = func_12A068(0xCB4B3756u);
    } else if (D_0021A7F0 == 2) {
        rec->w4 = func_12A068(0x9E07166Eu);
        rec->w8 = func_12A068(0x436CFFFBu);
        D_002085C4 = func_12A068(0x45A9B0E7u);
    } else {
        rec->w4 = func_12A068(0xE52F5FC1u);
    }
    if (rec->w4 == 0) {
        return 0;
    }
    rec->w0 = 0;
    rec->wC = 0;
    o->f70 = 9.0f;
    return 1;
}
