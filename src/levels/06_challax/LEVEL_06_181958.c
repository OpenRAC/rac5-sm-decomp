/* LEVEL_06:0x181958 -- configures a set of effect channels for an object. */
typedef struct Obj { char pad[0x20]; char sub20[0x10]; char sub30[1]; } Obj;
extern void func_003380(void *p);
extern void func_0036E8(float f, int a, float g, int b);
extern void func_003718(float f, int a, float g, int b);
extern void func_003838(float f, int a, float g, int b);
extern void func_003888(float f, int a, float g, int b);
extern void func_0033E8(int a, int b, int c);
extern void func_0033A8(int a);
extern void func_0038B8(void *p, int a, float f, int b);
extern void func_003170(void *p, int a, float f);
extern void func_038500(int a);
void func_181958(Obj *self, int on, int keep)
{
    int mode;
    func_003380(self->sub20);
    mode = on ? 3 : 0;
    func_0036E8(5.0f, 10, 1.0f, mode);
    func_003718(2.0f, 10, 1.0f, mode);
    func_003838(-0.1f, 10, 1.0f, mode);
    func_003888(2.3f, 10, 1.0f, mode);
    func_0033E8(0, 0, 0);
    if (!keep) {
        func_0033A8(0);
        func_0038B8(self->sub20, 10, 1.0f, mode);
    }
    func_003170(self->sub30, 1, 0.0f);
    func_038500(0);
}
