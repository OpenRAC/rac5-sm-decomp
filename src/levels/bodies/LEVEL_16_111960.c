/* LEVEL_16:0x111960 -- take the record of the player, ask the manager for
   its state, release the object when the state asks for it and give the
   record to the routine that stores it. */
typedef struct {
    int flag;
    int a;
    int b;
    int c;
    int d;
    int e;
} Rec;

extern Rec *D_1B4BA4;
extern unsigned int D_1B4BB0;

extern int func_0FAB00(unsigned int object);
extern void func_0FAB28(unsigned int object);
extern void func_111610(Rec *record);

void func_111960(void)
{
    Rec r = *D_1B4BA4;
    int state;
    int changed = 0;

    r.flag = 0;
    state = func_0FAB00(D_1B4BB0);
    switch (state) {
    case 3:
        func_0FAB28(D_1B4BB0);
        D_1B4BB0 = 0xFFFFFFFFu;
        break;
    case 4:
        changed = 1;
        break;
    }
    if (changed) {
        r.flag = -1;
    } else {
        func_111610(&r);
    }
    *D_1B4BA4 = r;
}
