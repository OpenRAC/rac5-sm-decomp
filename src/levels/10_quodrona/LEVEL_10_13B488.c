/* LEVEL_10:0x13B488 -- placement copy of LEVEL_01_13D600.c: picks the 12-byte descriptor for the object's flags: a fixed one while falling with the marker set, another when the switch byte is set with nothing selected, otherwise the entry indexed by the (capped) selector. */
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

extern Desc D_002244D8[];
extern Desc D_002244FC;
extern Desc D_00224508;

Desc *func_13B488(Mover *m, Info *info)
{
    unsigned int n;
    unsigned int cap;

    if (m->vel < 0.0f && info->bF2 != 0)
        return &D_00224508;
    n = info->bF1;
    cap = 2;
    if (cap < n)
        n = cap;
    if (info->bF3 != 0 && info->bED == 0 && n == 0)
        return &D_002244FC;
    return &D_002244D8[n];
}
