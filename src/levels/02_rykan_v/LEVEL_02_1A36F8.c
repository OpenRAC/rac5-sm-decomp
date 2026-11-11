/* LEVEL_02:0x1A36F8 -- releases the linked record's attached handle when it is idle and clears its busy byte. */
typedef struct {
    char *handle;
    unsigned char busy;
} Rec;

typedef struct {
    char pad_00[0x54];
    Rec *rec;
} Obj;

extern void func_087408(char *record);

void func_1A36F8(Obj *o)
{
    Rec *rec = o->rec;

    if (rec->busy == 0) {
        if (rec->handle != 0) {
            func_087408(rec->handle);
            rec->handle = 0;
        }
    }
    rec->busy = 0;
}
