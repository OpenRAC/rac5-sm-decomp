/* LEVEL_17:0x0670D8 -- placement copy of LEVEL_01_075998.c: lazily registers three handlers and stores their ids. */
extern int D_00197124;
extern int D_00197128;
extern int D_0019712C;
extern int D_0023F55C;
extern int D_0023F5FC;
extern void func_067540(void);
extern void func_0674E8(void);
extern void func_068C88(void);
extern void func_0688A0(void);
extern void func_068080(void);
extern void func_067FE0(void);
extern void func_087F70(char *buf, unsigned a, void (*f)(void), int size, int b, int c, void (*g)(void));
extern int func_088148(char *buf);
void func_0670D8(void)
{
    char buf[16];
    if (D_00197124 < 0) {
        func_087F70(buf, (D_0023F55C << 16) | 0xB0007059, func_067540, 0x1C, 0, -1, func_0674E8);
        D_00197124 = func_088148(buf);
    }
    if (D_00197128 < 0) {
        func_087F70(buf, (D_0023F55C << 16) | 0x98007059, func_068C88, 0x44, 0, -1, func_0688A0);
        D_00197128 = func_088148(buf);
    }
    if (D_0019712C < 0) {
        func_087F70(buf, (D_0023F5FC << 16) | 0x88007059, func_068080, 0x1C, 0, -1, func_067FE0);
        D_0019712C = func_088148(buf);
    }
}
