/* LEVEL_06:12EBA0 -- resets the global record and stores the pointer the
   shared routine returns. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_0037E4C0;
extern void *D_0037E4D0;
extern char D_00209C60[];

extern void *func_105A18(void *a0);

void func_12EBA0(void *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            void **p = &D_0037E4D0;

            D_0037E4C0.f_00 = 0;
            D_0037E4C0.f_04 = 0;
            D_0037E4C0.f_08 = 0;
            D_0037E4C0.f_0C = 1.0f;
            *p = func_105A18(D_00209C60);
        }
    }
}
