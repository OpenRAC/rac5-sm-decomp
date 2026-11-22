/* USA LEVEL_01.REL:0x0D62B0 (21 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement declares
 * func_01A8A8 unlike its accepted definition; and declares func_0A8D40 unlike
 * its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
typedef struct Obj Obj;
struct Obj {
    char pad[0xD0];
    int handle;
};

extern int D_002065E8;
extern char D_002148C0[];
extern char D_0032D008[];
extern void func_0A8D40(void *buf, int a, void *b, void *c, void *d);
extern void func_0A8CA0(unsigned int a);
extern Obj *func_0BA408(void *p);
extern int func_088020(int pad);
extern void func_0B6020(int a);
extern int func_0BCB20(void);
extern void func_01A828(int a, int b);
extern void func_01A8A8(int a, int b);
extern void func_0B96A8(void *p);

void func_0D62B0(void)
{
    char buf[0x100];
    Obj *obj;
    int pad;

    pad = D_002065E8;
    if (pad != 0) {
        func_0A8D40(buf, pad, D_002148C0, D_002148C0, D_002148C0);
        D_002065E8 = 0;
    }
    func_0A8CA0(0xFFFFFFFF);
    obj = func_0BA408(D_0032D008);
    pad = func_088020(1);
    if (pad & 8) {
        func_0B6020(0);
        func_01A828(4, 0);
    } else if (pad & 0x1000) {
        func_0B6020(0);
        func_0B6020(7);
        if (func_0BCB20() == 0) {
            func_01A828(4, 0);
        }
    } else if (pad & 0x4000) {
        if (obj != 0) {
            func_0B6020(1);
            func_01A8A8(obj->handle, 1);
        }
    } else {
        func_0B96A8(D_0032D008);
    }
}
