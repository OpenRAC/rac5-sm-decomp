/* FRONTEND:0x001EE8 -- per-frame update: resets lighting, runs subsystems, updates sound, counts down a timer. */
extern void LIGHT_Reset(void) __asm__("LIGHT_Reset__Fv");
extern void SND_LevelUpdate(const void *a, const void *b) __asm__("SND_LevelUpdate__FPC7MATRIX4T0");
extern void func_001EE0(void);
extern int func_001B20(int a);
extern void func_004EC8(void);
extern void func_005618(int a);
extern int func_011558(void);
extern void func_000120(int a);
extern void *func_000178(void);
extern void func_002018(void);
extern void func_001AE0(int a, int b);
extern char D_00027E43;
extern char D_00027E44;
extern unsigned char D_00027E45;
extern int D_00027E48;
extern int D_00027E4C;
extern char D_0010B9E0[];

void func_001EE8(void)
{
    D_00027E43 = 1;
    D_00027E44 = 1;
    LIGHT_Reset();
    func_001EE0();
    if (func_001B20(6) == 0) {
        func_004EC8();
    }
    func_005618(1);
    func_011558();
    func_000120(0);
    if (D_00027E45 != 0) {
        SND_LevelUpdate(D_0010B9E0, D_0010B9E0);
    } else {
        void *a = func_000178();
        SND_LevelUpdate(a, func_000178());
    }
    func_002018();
    if (D_00027E48 != 0) {
        D_00027E48 = D_00027E48 - 1;
        if (D_00027E48 != 0) {
            return;
        }
    }
    if (D_00027E4C != 0) {
        D_00027E48 = 0;
        func_001AE0(5, 0);
    }
}
