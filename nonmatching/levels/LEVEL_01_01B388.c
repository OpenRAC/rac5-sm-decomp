/* LEVEL_01.REL:0x01B388: reviewed 360-byte candidate, held for ABI review.
 * Sets up the two-view draw: picks the tint, renders each active view and
 * closes the pass.
 * pinned C with gnu-ee-trial links 360/360 bytes and is byte-exact at this and
 * 14 other USA placements, but the prototypes disagree.
 * It declares func_01AC68 returning void with (int), but the accepted
 * LEVEL_01_01AC68.c defines it returning void with no arguments.
 * It declares func_0011C8 returning pointer with no arguments, but the
 * accepted LEVEL_01_0011C8.c defines it returning int with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int D_0021A7F0;
extern int D_001F68B4;
extern unsigned char D_001EF40D;
extern unsigned char D_001F626C;

void func_01AC68(int a);
int func_001050(int i);
void func_001000(int i);
void func_001228(void);
void func_02A6A8(float *a, float *b);
void *func_0011C8(void);
void func_098FD0(void *ctx, float *a, float *b, int i);
void func_09FA48(void);
int func_02A3F0(int a);
void func_01B010(int i);
void func_0A9018(void);
void func_04BCC0(void);
void func_0A9038(void);
void func_0AFFB0(void);
void func_0AFFE8(void);
void func_0A1130(int a, unsigned int b);

void func_01B388(void)
{
    float a[16];
    float b[16];
    unsigned int i;

    if (D_0021A7F0 == 1) {
        D_001F68B4 = 0xCCAA00;
    } else {
        D_001F68B4 = 0;
    }
    func_01AC68(1);
    for (i = 0; i < 2; i++) {
        if (D_001EF40D != 0 && func_001050(i) != 0) {
            func_001000(i);
            func_001228();
            func_02A6A8(a, b);
            func_098FD0(func_0011C8(), a, b, i);
        }
    }
    func_09FA48();
    for (i = 0; i < 2; i++) {
        if (func_001050(i) != 0) {
            func_001000(i);
            func_001228();
            D_001F626C = func_02A3F0(4);
            func_01B010(i);
            func_0A9018();
            func_04BCC0();
            func_0A9038();
        }
    }
    func_0A9018();
    func_0AFFB0();
    func_0AFFE8();
    func_0A9038();
    func_0A1130(0, 0xFFFFFFFF);
}
