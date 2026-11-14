/* LEVEL_20:0x0F36A8 -- placement copy of LEVEL_16_1215A8.c: resets the ring state unless a fixed mode is active, then refreshes every ring slot and clears the cursor fields. */
extern unsigned char D_00205350;
extern unsigned int D_0011E6A0;
extern unsigned int D_0011E220;
extern unsigned char D_0011E30C;
extern int D_00205348;
extern unsigned int D_00117344;
extern float D_0011E224;
extern int D_0011E5F8[];
extern int func_094BD0(void);
extern void func_0F13C0(void);
extern void func_0EFF68(void);
extern void func_0F3430(void);

void func_0F36A8(void)
{
    unsigned int i;

    if (func_094BD0() != 0x31) {
        func_0F13C0();
        D_00205350 = 0;
        D_0011E6A0 = 0;
        D_0011E220 = 0;
    }
    D_0011E30C = 1;
    func_0EFF68();
    i = 0;
    D_00205348 = 9;
    for (; i < D_00117344; i++) {
        func_0F3430();
    }
    D_0011E224 = 0.0f;
    D_0011E5F8[2] = 0;
}
