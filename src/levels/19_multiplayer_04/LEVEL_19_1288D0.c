/* LEVEL_19:0x1288D0 -- initialises a global record and publishes the
   pointer the shared resource hands back. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_002E2C58;
extern Rec *D_002E2C68;
extern Rec *func_0F06A8(void *);
extern char D_001D1B08[];

void func_1288D0(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        Rec **dst = &D_002E2C68;

        D_002E2C58.f_00 = 0;
        D_002E2C58.f_04 = 0;
        D_002E2C58.f_08 = 0;
        D_002E2C58.f_0C = 1.0f;
        *dst = func_0F06A8(D_001D1B08);
    }
}
