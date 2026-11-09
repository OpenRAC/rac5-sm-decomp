/* LEVEL_01.REL:0x0D2800: reviewed 100-byte candidate, held for ABI review.
 * Runs a fixed set of init calls, one conditional on a status byte.
 * pinned C with gnu-ee-trial links 100/100 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It declares func_0B7128 returning void with (int), but the accepted
 * LEVEL_01_0B7128.c defines it returning void with (pointer).
 * It declares func_133F70 returning void with no arguments, but the accepted
 * LEVEL_01_133F70.c defines it returning int with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct G22 {
    char pad0[0x1C68];
    int w1C68;
};

extern struct G22 *D_001F3FAC;
extern unsigned char D_002045E9;
extern void *D_0021A7F0;

void func_0B7128(int a);
void func_0B6E68(void);
void func_1332A0(void *p);
void func_0B6020(int a);
void func_133F70(void);
void func_0A6448(void);
void func_02A0B0(void);

void func_0D2800(void)
{
    func_0B7128(D_001F3FAC->w1C68);
    func_0B6E68();
    if (D_002045E9 != 0) {
        func_1332A0(D_0021A7F0);
    }
    func_0B6020(7);
    func_133F70();
    func_0A6448();
    func_02A0B0();
}
