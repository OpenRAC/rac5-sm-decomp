/* LEVEL_10:0x1771D0 -- when the shared gauge is high enough, starts the fade and the follow-up for the object's record; always reports -1. */
typedef struct {
    void *w0;
    void *w4;
} Obj;

extern float func_07D0C0(void *a0);
extern void func_0A7118(int a, unsigned int color, int w, int h, int mode, int flag);
extern int func_0A7150(int a);
extern void func_04A878(void *p);

int func_1771D0(void *unused, Obj *o)
{
    if (func_07D0C0(o->w0) >= 0.8f) {
        func_0A7118(0, 0xFF000000u, 32, 32, 3, 0);
        if (func_0A7150(0) != 0)
            func_04A878(o->w4);
    }
    return -1;
}
