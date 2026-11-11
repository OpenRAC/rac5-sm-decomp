/* LEVEL_06:15E278 -- resets the global record and stores the pointer the
   shared routine returns. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00382A80;
extern void *D_00382A90;
extern char D_0020E808[];

extern void *func_105A18(void *a0);

void func_15E278(void *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            void **p = &D_00382A90;

            D_00382A80.f_00 = 0;
            D_00382A80.f_04 = 0;
            D_00382A80.f_08 = 0;
            D_00382A80.f_0C = 1.0f;
            *p = func_105A18(D_0020E808);
        }
    }
}
