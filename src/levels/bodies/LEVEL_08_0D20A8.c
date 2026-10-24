/* LEVEL_08:0x0D20A8 -- resets the shared record and re-arms or clears the two
   sub-timers depending on the caller's request. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_37ACA8;
extern char D_37ACB8[];
extern char D_37ACF0[];
extern void func_146D80(void *a);
extern void func_0D1C00(void *a);
extern void func_0D1FF8(void *a, int mode);
extern void func_0D1BD8(void *a, int mode);

void func_0D20A8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_37ACA8.f_0C = 1.0f;
            D_37ACA8.f_00 = 0;
            D_37ACA8.f_08 = 0;
            D_37ACA8.f_04 = 0;
            func_146D80(D_37ACB8);
            func_0D1C00(D_37ACF0);
        } else {
            func_0D1FF8(D_37ACF0, 2);
            func_0D1BD8(D_37ACB8, 2);
        }
    }
}
