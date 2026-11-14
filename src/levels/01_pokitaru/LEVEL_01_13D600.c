/* LEVEL_01:0x13D600 -- picks the 12-byte descriptor for the object's flags: a fixed one while falling with the marker set, another when the switch byte is set with nothing selected, otherwise the entry indexed by the (capped) selector. */
typedef struct Desc {
    int w[3];
} Desc;

typedef struct Mover {
    char pad_00[0x70];
    float vel;
} Mover;

typedef struct Info {
    char pad_00[0xED];
    unsigned char bED;
    char pad_EE[3];
    unsigned char bF1;
    unsigned char bF2;
    unsigned char bF3;
} Info;

extern Desc D_0021B508[];
extern Desc D_0021B52C;
extern Desc D_0021B538;

Desc *func_13D600(Mover *m, Info *info)
{
    unsigned int n;
    unsigned int cap;

    if (m->vel < 0.0f && info->bF2 != 0)
        return &D_0021B538;
    n = info->bF1;
    cap = 2;
    if (cap < n)
        n = cap;
    if (info->bF3 != 0 && info->bED == 0 && n == 0)
        return &D_0021B52C;
    return &D_0021B508[n];
}
