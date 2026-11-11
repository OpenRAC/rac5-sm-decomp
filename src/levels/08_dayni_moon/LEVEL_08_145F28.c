/* LEVEL_08:0x145F28 -- take the record of the player, ask the manager for
   its state, give the record to the routine that checks it and keep the
   state when the check succeeds. */
typedef struct {
    int flag;
    int a;
    int b;
    int c;
    int d;
    int e;
} Rec;

extern Rec *D_24FF54;
extern unsigned int D_24FF60;
extern int D_24FF5C;

extern int func_12ABB0(unsigned int object);
extern int func_12AB20(unsigned int object, int a, int b);

void func_145F28(void)
{
    Rec r = *D_24FF54;
    int state;
    int changed = 0;

    r.flag = 0;
    state = func_12ABB0(D_24FF60);
    switch (state) {
    case 3:
        if (func_12AB20(D_24FF60, r.d, 0)) {
            D_24FF5C = state;
        } else {
            changed = 1;
        }
        break;
    case 4:
        changed = 1;
        break;
    }
    if (changed)
        r.flag = -1;
    *D_24FF54 = r;
}
