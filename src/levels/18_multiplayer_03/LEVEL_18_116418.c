/* LEVEL_18:0x116418 -- placement copy of LEVEL_16_1173E8.c: fills a record of table values selected by an object's index and the current mode. */
typedef struct {
    char pad0[0xF8];
    int k;
} Obj;

extern int D_002DFFB8[];
extern int D_002DFFF8[];
extern int D_002E0008[];
extern int D_002E0018[];
extern int D_002E0028[];
extern int D_002E0038[];
extern int D_002E0048[];
extern int D_002E0058[];
extern int D_002E0068[];
extern int D_001D1A20;
extern int func_111BB8(void);
extern char *func_115370(Obj *o);
extern char *strcpy(char *, const char *);

void func_116418(Obj *o, int *out)
{
    int sum = 0;
    int k = o->k;
    unsigned int j;
    int t1;
    int t2;

    for (j = 0; j < 4; j++)
        sum += D_002DFFB8[j * 4 + k];
    sum += D_002DFFF8[k];
    t1 = D_002E0008[k];
    t2 = *(int *)((char *)D_002DFFB8 + k * 0x14);
    out[4] = sum;
    out[3] = t1;
    out[5] = t2;
    if (func_111BB8() == 0) {
        if (D_001D1A20 == 0x10) {
            out[1] = D_002E0018[o->k];
            out[2] = D_002E0028[o->k];
            out[0] = D_002E0038[o->k];
        } else if (D_001D1A20 == 0x11) {
            out[9] = D_002E0018[o->k];
            out[10] = D_002E0038[o->k];
            out[8] = D_002E0058[o->k];
        } else if (D_001D1A20 == 0x12) {
            out[13] = D_002E0038[o->k];
            out[14] = D_002E0048[o->k];
            out[15] = D_002E0068[o->k];
        } else if (D_001D1A20 == 0x13) {
            out[11] = D_002E0018[o->k];
            out[12] = D_002E0038[o->k];
        }
    } else if (func_111BB8() == 2) {
        out[6] = D_002E0038[o->k];
        out[7] = D_002E0048[o->k];
    }
    {
        char *name = func_115370(o);

        if (name)
            strcpy((char *)out + 0x40, name);
        else
            *((char *)out + 0x40) = 0;
    }
}
