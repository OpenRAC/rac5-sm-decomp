/* LEVEL_03:0x1D10C0 -- finishes loading an object: marks it when in state 4, runs the record setup, then turns the record's stored offsets into pointers against the resource base, clearing the first one when it points at an empty target. */
typedef struct Ent {
    char pad_00[0x40];
    int value;
} Ent;

typedef struct Rec {
    int w0;
    int w4;
    int w8;
    int wC;
    int w10;
} Rec;

extern char *D_0021F414;
extern void func_02F758(char *a0);

void func_1D10C0(char *object)
{
    Rec *rec = *(Rec **)(object + 0x54);
    Ent *ent;

    if (*(unsigned char *)(object + 0x45) == 4)
        *(unsigned int *)(object + 0x64) |= 0x30;
    func_02F758((char *)rec + 0x14);
    if (rec->w10 != 0) {
        ent = (Ent *)(D_0021F414 + rec->w10);
        if (ent->value == 0)
            rec->w10 = 0;
        else
            rec->w10 = (int)ent;
    }
    if (rec->w4 != 0)
        rec->w4 = (int)(D_0021F414 + rec->w4);
    if (rec->w0 != 0)
        rec->w0 = (int)(D_0021F414 + rec->w0);
    if (rec->w8 != 0)
        rec->w8 = (int)(D_0021F414 + rec->w8);
    if (rec->wC != 0)
        rec->wC = (int)(D_0021F414 + rec->wC);
}
