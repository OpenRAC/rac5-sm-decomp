/* LEVEL_18:0x156D30 -- initialises a spawned object: relocates its plain and checked links (failing when a checked link is missing or dead), clears its state, creates the two shared sound emitters on first use and picks a random delay. */
typedef struct {
    char pad_00[0x40];
    int w_40;
} Ptr;

typedef struct {
    char *p_00;
    char *p_04;
    Ptr *p_08[3];
    Ptr *p_14;
    Ptr *p_18;
    Ptr *p_1C[3];
    Ptr *p_28[3];
} Info;

typedef struct {
    int w_00[3];
    float f_0C;
    char pad_10[4];
    int w_14;
    unsigned char b_18;
    unsigned char b_19;
} Ext;

typedef struct {
    char pad_00[0x18];
    float f_18;
    float f_1C;
} Snd;

typedef struct {
    char pad_00[0x54];
    Info *info_54;
    Ext *ext_58;
} Obj;

extern char *D_001B5D24;
extern Snd *D_001BF10C[1];
extern Snd *D_001BF110[1];

extern int func_111BB8(void);
extern int func_105B48(unsigned int value);
extern int rand(void);

static __inline__ float RandRange(float base, float range)
{
    return (float)rand() * 4.656612873077393e-10f * range + base;
}

static __inline__ int Relocate(Ptr **pp)
{
    Ptr *n;

    if (*pp == 0) {
        return 0;
    }
    n = (Ptr *)(D_001B5D24 + (int)*pp);
    if (n->w_40 == 0) {
        *pp = 0;
        return 0;
    }
    *pp = n;
    return 1;
}

int func_156D30(Obj *o)
{
    Info *in;
    Ext *e;
    unsigned int i;
    unsigned int j;
    unsigned int k;
    unsigned int n;

    if (func_111BB8() != 0) {
        return -1;
    }
    in = o->info_54;
    e = o->ext_58;
    if (in->p_00 != 0) {
        in->p_00 = D_001B5D24 + (int)in->p_00;
    }
    if (in->p_04 != 0) {
        in->p_04 = D_001B5D24 + (int)in->p_04;
    }
    for (i = 0; i < 3; i++) {
        if (!Relocate(&in->p_08[i])) {
            return 0;
        }
    }
    if (!Relocate(&in->p_14)) {
        return 0;
    }
    if (!Relocate(&in->p_18)) {
        return 0;
    }
    for (j = 0; j < 3; j++) {
        if (!Relocate(&in->p_1C[j])) {
            return 0;
        }
    }
    for (k = 0; k < 3; k++) {
        if (!Relocate(&in->p_28[k])) {
            return 0;
        }
    }
    for (n = 0; n < 3; n++) {
        e->w_00[n] = 0;
    }
    e->b_18 = 0;
    e->b_19 = 0;
    e->w_14 = 0;
    if (D_001BF10C[0] == 0) {
        D_001BF10C[0] = (Snd *)func_105B48(0x03479DB0);
        if (D_001BF10C[0] != 0) {
            D_001BF10C[0]->f_1C = 100000.0f;
            D_001BF10C[0]->f_18 = 100000.0f;
        }
    }
    if (D_001BF110[0] == 0) {
        D_001BF110[0] = (Snd *)func_105B48(0xDCEFA1BC);
        if (D_001BF110[0] != 0) {
            D_001BF110[0]->f_1C = 100000.0f;
            D_001BF110[0]->f_18 = 100000.0f;
        }
    }
    e->f_0C = RandRange(18.0f, 10.0f);
    return 1;
}
