/* LEVEL_01.REL:0x0177F0: reviewed 340-byte candidate, held for ABI review.
 * Brings up the front-end services: loads the two resource sets for the saved
 * mode, runs the startup helpers and spawns the menu object.
 * pinned C with gnu-ee-trial links 340/340 bytes and is byte-exact at this and
 * 14 other USA placements, but the prototypes disagree.
 * It declares func_132210 returning void with (pointer, pointer, pointer,
 * int), but the accepted FRONTEND_01F700.c defines it returning int with
 * (pointer, int, int, int).
 * It declares func_024628 returning pointer with (int, int), but the accepted
 * LEVEL_01_024628.c defines it returning int with (int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    char pad_00[0x3C];
    int mode;
} Cfg;

extern Cfg *D_001F3FAC;
extern char D_00235140[];
extern char D_00387D20[];
extern char D_00351D20[];
extern char D_0020BDB8[];
extern char D_001FBF88[];
extern char D_00387D68[];
extern char D_0037FD20[];
extern char D_0020BDD8[];
extern void func_0B0818(void);
extern void func_0AFC70(char *p);
extern void func_133010(int a);
extern void func_132210(char *a, char *b, char *c, int d);
extern int func_1327A8(char *a, int b, int c);
extern void func_1326E8(char *a, char *b);
extern void func_017318(void);
extern int func_027408(int a, int b);
extern void func_01AFE0(int a);
extern void func_037998(void);
extern int *func_024628(int a, int b);
extern void func_096850(void);
extern void func_0984F8(void);
extern void func_09F6A8(void);
extern void func_0358D8(void);

void func_0177F0(void)
{
    int mode;
    char *s;
    char *r;
    char buf[0x40];
    int *o;
    int v;

    mode = 0;
    func_0B0818();
    s = D_00235140;
    func_0AFC70(s + 0x30);
    func_133010(1);
    if (D_001F3FAC != 0) {
        mode = D_001F3FAC->mode;
    }
    r = D_00387D20;
    func_132210(r, D_00351D20, D_0020BDB8, 0x2E000);
    if (func_1327A8(r, (unsigned char)mode, 1)) {
        func_1326E8(r, D_001FBF88);
    }
    r = D_00387D68;
    func_132210(r, D_0037FD20, D_0020BDD8, 0x8000);
    if (func_1327A8(r, (unsigned char)mode, 0)) {
        func_1326E8(r, buf);
    }
    func_017318();
    v = func_027408(0x90, 0xFF);
    if (v) {
        func_01AFE0(v);
    }
    func_037998();
    if (s != 0) {
        o = func_024628(0xC, *(int *)(s + 0xF8));
        o[0x40 / 4] = 0;
    }
    func_096850();
    func_0984F8();
    func_09F6A8();
    func_0358D8();
}
