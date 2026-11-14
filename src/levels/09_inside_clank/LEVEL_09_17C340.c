/* LEVEL_09:0x17C340 -- when the linked record passes the check against the global record, runs the two shared steps, releases the record's handle, the object's slot and finishes the record. */
typedef struct Rec { void *w0; int w4; int w8; } Rec;
typedef struct Obj { char pad00[0x54]; Rec *f54; char pad58[8]; int f60; } Obj;
extern char D_0021C8C0[];
extern void *D_002043F0;
extern int func_0810E8(void *a, float *p);
extern void func_017588(void);
extern void func_018A00(void);
extern int func_0266B0(unsigned int index, int enabled);
extern void func_026DF0(void *a0, int a1, int a2);
extern int func_019C98(int a0, int a1);
void func_17C340(Obj *o)
{
    Rec *r = o->f54;
    float *p;
    p = (float *)D_0021C8C0;
    p += 12;
    if (func_0810E8(r->w0, p) != 0) {
        func_017588();
        func_018A00();
        if (r->w8 != 0) { func_0266B0(r->w8, 1); }
        if (o->f60 != 0) { func_026DF0(D_002043F0, o->f60, 1); }
        func_019C98(r->w4, 1);
    }
}
