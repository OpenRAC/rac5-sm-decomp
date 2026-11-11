/* FRONTEND:0x019410 -- initializes subsystems and a level, then pumps frames until a pending state clears. */
struct State {
    int pad;
    int v;
};
extern char D_00108A68[];
extern struct State *D_0010BE50;
extern int D_00027EA8;
extern void func_01C868(char *p);
extern void func_0022C0(int a, int b, int c);
extern void func_0025C0(void);
extern int func_002C80(void);
extern void func_002EC0(void);
extern void func_019520(void);
extern void func_01C7B0(void);
extern void func_002EC8(void);
extern void SND_LevelInit__Fv(void);
extern void func_001878(void);
extern void func_002DD8(int a);
extern void func_01B3F0(void);
extern int func_002DC8(void);
extern void MCPI_SendNewLevel__Fi(int v);

int func_019410(int a, int b)
{
    func_01C868(D_00108A68);
    func_0022C0(a, b, 0);
    func_0025C0();
    func_002C80();
    func_002EC0();
    func_019520();
    func_01C7B0();
    func_002EC8();
    SND_LevelInit__Fv();
    while (D_0010BE50->v == -1) {
        D_00027EA8++;
        func_001878();
        func_002DD8(0);
    }
    func_01B3F0();
    MCPI_SendNewLevel__Fi(func_002DC8());
    return 0;
}
