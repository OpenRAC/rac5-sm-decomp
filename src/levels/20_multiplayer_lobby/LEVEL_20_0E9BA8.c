/* LEVEL_20:0x0E9BA8 -- placement copy of LEVEL_16_1173E8.c: fills a record of table values selected by an object's index and the current mode. */
typedef struct {
    char pad0[0xF8];
    int k;
} Obj;

extern int D_00203190[];
extern int D_002031D0[];
extern int D_002031E0[];
extern int D_002031F0[];
extern int D_00203200[];
extern int D_00203210[];
extern int D_00203220[];
extern int D_00203230[];
extern int D_00203240[];
extern int D_00131510;
extern int func_0E5970(void);
extern char *func_0E8EC8(Obj *o);
extern char *strcpy(char *, const char *);

void func_0E9BA8(Obj *o, int *out)
{
    int sum = 0;
    int k = o->k;
    unsigned int j;
    int t1;
    int t2;

    for (j = 0; j < 4; j++)
        sum += D_00203190[j * 4 + k];
    sum += D_002031D0[k];
    t1 = D_002031E0[k];
    t2 = *(int *)((char *)D_00203190 + k * 0x14);
    out[4] = sum;
    out[3] = t1;
    out[5] = t2;
    if (func_0E5970() == 0) {
        if (D_00131510 == 0x10) {
            out[1] = D_002031F0[o->k];
            out[2] = D_00203200[o->k];
            out[0] = D_00203210[o->k];
        } else if (D_00131510 == 0x11) {
            out[9] = D_002031F0[o->k];
            out[10] = D_00203210[o->k];
            out[8] = D_00203230[o->k];
        } else if (D_00131510 == 0x12) {
            out[13] = D_00203210[o->k];
            out[14] = D_00203220[o->k];
            out[15] = D_00203240[o->k];
        } else if (D_00131510 == 0x13) {
            out[11] = D_002031F0[o->k];
            out[12] = D_00203210[o->k];
        }
    } else if (func_0E5970() == 2) {
        out[6] = D_00203210[o->k];
        out[7] = D_00203220[o->k];
    }
    {
        char *name = func_0E8EC8(o);

        if (name)
            strcpy((char *)out + 0x40, name);
        else
            *((char *)out + 0x40) = 0;
    }
}
