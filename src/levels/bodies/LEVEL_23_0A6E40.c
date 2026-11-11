/* LEVEL_23:0x0A6E40 -- placement copy of LEVEL_01_0B00D0.c: per-frame update sequence for the menu screen. */
extern unsigned char D_001CF208;
extern unsigned char D_001CF3D0;
extern unsigned char D_001CF510;
extern unsigned char D_001CF1E4;
extern unsigned char D_001CF1E5;
extern unsigned char D_001CF511;
extern unsigned char D_001CF512;
extern int D_001CF514;
extern unsigned int D_001CA5C8;
extern unsigned char D_001D49F0;
extern char D_002EE9E0[];
extern char D_002EEAE8[];
extern char D_001E4560[];
extern char D_001E4570[];

extern void func_0A6DA8(void);
extern void func_123090(void *p);
extern void func_09F8B0(void);
extern void func_0A7360(void);
extern void func_0A7030(void);
extern void func_0A71E8(void);
extern void func_0A9078(int a, int b, float x, float y);
extern void func_0AC270(int a, void *b, void *c, int d);
extern void func_0A5818(unsigned int a, unsigned int b, float f);
extern void func_0AC858(void);
extern void func_0ADD40(void);
extern void func_0A8B48(void);
extern void func_0A85F8(void);
extern void func_0ACFE0(void);
extern void func_0A9180(void);
extern void func_0AC608(void);
extern void func_0ABA80(void);
extern void func_0A9588(void);
extern void func_0AB798(void);
extern void func_0A9F00(void);
extern void func_0A7D00(void);
extern void func_09FA10(unsigned int a);
extern void func_0ABFB8(void);
extern void func_0AB6C8(void);
extern void func_09CBA8(int a);
extern void func_0C1868(void);
extern void func_09FDA8(void);

void func_0A6E40(void)
{
    if (D_001CF208) {
        func_0A6DA8();
        func_123090(D_002EE9E0);
        if (D_001CF3D0) {
            func_09F8B0();
        } else {
            if (D_001CF510) func_0A7360();
            if (D_001CF1E4) func_0A7030();
            if (D_001CF1E5) func_0A71E8();
            if (D_001CF511) {
                D_001CF511 = 0;
                func_0A9078(52, 90, 100.0f, 75.0f);
            }
            if (D_001CF512) {
                D_001CF512 = 0;
                D_001CF514 = 120;
            }
            if (D_001CF514 != 0) {
                func_0AC270(1, D_001E4560, D_001E4570, 0);
                D_001CF514--;
            }
            if (D_001CA5C8 != 0xFFFFFFFF) func_0A5818(D_001CA5C8, 0xFFFFFFFF, 0.0f);
            func_0AC858();
            func_0ADD40();
            func_0A8B48();
            func_0A85F8();
            func_0ACFE0();
            func_0A9180();
            func_0AC608();
            func_0ABA80();
            func_0A9588();
            func_0AB798();
            func_0A9F00();
            func_0A7D00();
            func_09FA10(0xFFFFFFFF);
            func_123090(D_002EEAE8);
            func_0ABFB8();
            func_0AB6C8();
            func_09CBA8(0);
            if (D_001D49F0) func_0C1868();
            func_09FDA8();
        }
    }
}
