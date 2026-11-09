/* LEVEL_19:0x117D98 -- placement copy of LEVEL_16_1173E8.c: fills a record of table values selected by an object's index and the current mode. */
typedef struct {
    char pad0[0xF8];
    int k;
} Obj;

extern int D_002DFDB8[];
extern int D_002DFDF8[];
extern int D_002DFE08[];
extern int D_002DFE18[];
extern int D_002DFE28[];
extern int D_002DFE38[];
extern int D_002DFE48[];
extern int D_002DFE58[];
extern int D_002DFE68[];
extern int D_001D16A0;
extern int func_1135A8(void);
extern char *func_116D40(Obj *o);
extern char *strcpy(char *, const char *);

void func_117D98(Obj *o, int *out)
{
    int sum = 0;
    int k = o->k;
    unsigned int j;
    int t1;
    int t2;

    for (j = 0; j < 4; j++)
        sum += D_002DFDB8[j * 4 + k];
    sum += D_002DFDF8[k];
    t1 = D_002DFE08[k];
    t2 = *(int *)((char *)D_002DFDB8 + k * 0x14);
    out[4] = sum;
    out[3] = t1;
    out[5] = t2;
    if (func_1135A8() == 0) {
        if (D_001D16A0 == 0x10) {
            out[1] = D_002DFE18[o->k];
            out[2] = D_002DFE28[o->k];
            out[0] = D_002DFE38[o->k];
        } else if (D_001D16A0 == 0x11) {
            out[9] = D_002DFE18[o->k];
            out[10] = D_002DFE38[o->k];
            out[8] = D_002DFE58[o->k];
        } else if (D_001D16A0 == 0x12) {
            out[13] = D_002DFE38[o->k];
            out[14] = D_002DFE48[o->k];
            out[15] = D_002DFE68[o->k];
        } else if (D_001D16A0 == 0x13) {
            out[11] = D_002DFE18[o->k];
            out[12] = D_002DFE38[o->k];
        }
    } else if (func_1135A8() == 2) {
        out[6] = D_002DFE38[o->k];
        out[7] = D_002DFE48[o->k];
    }
    {
        char *name = func_116D40(o);

        if (name)
            strcpy((char *)out + 0x40, name);
        else
            *((char *)out + 0x40) = 0;
    }
}
