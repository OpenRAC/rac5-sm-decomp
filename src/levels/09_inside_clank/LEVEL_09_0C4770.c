/* LEVEL_09:0x0C4770 -- placement copy of LEVEL_01_0C74C0.c: menu page handler: routes to the next page from the confirm / cancel inputs. */
extern int func_12BB90(int a);
extern int func_12BC28(void);
extern void func_12BD08(void);
extern char *func_12B448(int id);
extern void func_12E660(void *o, int page);
extern void func_12E678(void *o, int page);
extern void func_12E6A8(void *o);
extern void func_0D4200(int a, int b, char *s, int c);
extern void func_0D4238(int a);
extern int func_0D3D08(void);
extern int func_0D3D18(void);
extern void func_0D3FE0(int a);
extern int D_001EAA24;
extern int D_001EAA28;

void func_0C4770(void *o)
{
    int sel;

    if (func_12BB90(1)) {
        func_12E660(o, 0x1C);
        return;
    }
    if (func_12BC28()) {
        func_12BD08();
        func_12E678(o, 0x1D);
        return;
    }
    func_0D4200(1, D_001EAA24, func_12B448(0x21A), 0);
    func_0D4238(10);
    sel = func_0D3D08();
    if (func_0D3D18() && sel == 1) {
        func_0D3FE0(0);
        if (D_001EAA28 != 0x1D) {
            func_12E678(o, 0x1E);
        } else {
            func_12E6A8(o);
        }
    }
}
