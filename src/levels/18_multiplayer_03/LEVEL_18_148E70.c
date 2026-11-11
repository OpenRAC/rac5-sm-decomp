/* LEVEL_18:0x148E70 -- initialises the global record D_002E53D0, calls
   func_0EE898 with D_001D4B78 and stores the record's address in
   D_002E53E0. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_002E53D0;
extern Rec *D_002E53E0;
extern int D_001D4B78;
extern Rec *func_0EE898(int *p);

void func_148E70(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            Rec **out = &D_002E53E0;
            D_002E53D0.f_00 = 0;
            D_002E53D0.f_04 = 0;
            D_002E53D0.f_08 = 0;
            D_002E53D0.f_0C = 1.0f;
            *out = func_0EE898(&D_001D4B78);
        }
    }
}
