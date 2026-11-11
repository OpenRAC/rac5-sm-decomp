/* LEVEL_16:0x1173E8 -- fills a record of table values selected by an object's index and the current mode. */
typedef struct {
    char pad0[0xF8];
    int k;
} Obj;

extern int D_002DFC38[];
extern int D_002DFC78[];
extern int D_002DFC88[];
extern int D_002DFC98[];
extern int D_002DFCA8[];
extern int D_002DFCB8[];
extern int D_002DFCC8[];
extern int D_002DFCD8[];
extern int D_002DFCE8[];
extern int D_001D04A0;
extern int func_112E00(void);
extern char *func_1165C8(Obj *o);
extern char *strcpy(char *, const char *);

void func_1173E8(Obj *o, int *out)
{
    int sum = 0;
    int k = o->k;
    unsigned int j;
    int t1;
    int t2;

    for (j = 0; j < 4; j++)
        sum += D_002DFC38[j * 4 + k];
    sum += D_002DFC78[k];
    t1 = D_002DFC88[k];
    t2 = *(int *)((char *)D_002DFC38 + k * 0x14);
    out[4] = sum;
    out[3] = t1;
    out[5] = t2;
    if (func_112E00() == 0) {
        if (D_001D04A0 == 0x10) {
            out[1] = D_002DFC98[o->k];
            out[2] = D_002DFCA8[o->k];
            out[0] = D_002DFCB8[o->k];
        } else if (D_001D04A0 == 0x11) {
            out[9] = D_002DFC98[o->k];
            out[10] = D_002DFCB8[o->k];
            out[8] = D_002DFCD8[o->k];
        } else if (D_001D04A0 == 0x12) {
            out[13] = D_002DFCB8[o->k];
            out[14] = D_002DFCC8[o->k];
            out[15] = D_002DFCE8[o->k];
        } else if (D_001D04A0 == 0x13) {
            out[11] = D_002DFC98[o->k];
            out[12] = D_002DFCB8[o->k];
        }
    } else if (func_112E00() == 2) {
        out[6] = D_002DFCB8[o->k];
        out[7] = D_002DFCC8[o->k];
    }
    {
        char *name = func_1165C8(o);

        if (name)
            strcpy((char *)out + 0x40, name);
        else
            *((char *)out + 0x40) = 0;
    }
}
