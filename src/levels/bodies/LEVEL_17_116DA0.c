/* LEVEL_17:0x116DA0 -- placement copy of LEVEL_16_1173E8.c: fills a record of table values selected by an object's index and the current mode. */
typedef struct {
    char pad0[0xF8];
    int k;
} Obj;

extern int D_002D0F38[];
extern int D_002D0F78[];
extern int D_002D0F88[];
extern int D_002D0F98[];
extern int D_002D0FA8[];
extern int D_002D0FB8[];
extern int D_002D0FC8[];
extern int D_002D0FD8[];
extern int D_002D0FE8[];
extern int D_001C3920;
extern int func_112590(void);
extern char *func_115D28(Obj *o);
extern char *strcpy(char *, const char *);

void func_116DA0(Obj *o, int *out)
{
    int sum = 0;
    int k = o->k;
    unsigned int j;
    int t1;
    int t2;

    for (j = 0; j < 4; j++)
        sum += D_002D0F38[j * 4 + k];
    sum += D_002D0F78[k];
    t1 = D_002D0F88[k];
    t2 = *(int *)((char *)D_002D0F38 + k * 0x14);
    out[4] = sum;
    out[3] = t1;
    out[5] = t2;
    if (func_112590() == 0) {
        if (D_001C3920 == 0x10) {
            out[1] = D_002D0F98[o->k];
            out[2] = D_002D0FA8[o->k];
            out[0] = D_002D0FB8[o->k];
        } else if (D_001C3920 == 0x11) {
            out[9] = D_002D0F98[o->k];
            out[10] = D_002D0FB8[o->k];
            out[8] = D_002D0FD8[o->k];
        } else if (D_001C3920 == 0x12) {
            out[13] = D_002D0FB8[o->k];
            out[14] = D_002D0FC8[o->k];
            out[15] = D_002D0FE8[o->k];
        } else if (D_001C3920 == 0x13) {
            out[11] = D_002D0F98[o->k];
            out[12] = D_002D0FB8[o->k];
        }
    } else if (func_112590() == 2) {
        out[6] = D_002D0FB8[o->k];
        out[7] = D_002D0FC8[o->k];
    }
    {
        char *name = func_115D28(o);

        if (name)
            strcpy((char *)out + 0x40, name);
        else
            *((char *)out + 0x40) = 0;
    }
}
