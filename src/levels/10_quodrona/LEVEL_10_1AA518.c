/* LEVEL_10:0x1AA518 -- in state 14 runs func_1E0240 with the shared table entry, then runs func_1E02B8 on the table, releases the object's handle and runs func_1E2E10. */
typedef struct {
    char pad00[0x6C];
    int handle;
} Rec;

typedef struct {
    char pad00[0x45];
    unsigned char state;
    char pad46[0x58 - 0x46];
    Rec *rec;
} Obj;

extern char *D_001FCFAC;
extern void func_1E0240(float f, Obj *o, int entry, int k);
extern void func_1E02B8(int *table, int k, float f);
extern void func_07CCA0(int handle, int k);
extern void func_1E2E10(Obj *o);

void func_1AA518(Obj *o)
{
    Rec *rec = o->rec;

    if (o->state == 14)
        func_1E0240(0.15000000596046448f, o, *(int *)(D_001FCFAC + 0x13734), 0x15);
    func_1E02B8((int *)(D_001FCFAC + 0x13734), 0x15, 0.15000000596046448f);
    func_07CCA0(rec->handle, 1);
    func_1E2E10(o);
}
