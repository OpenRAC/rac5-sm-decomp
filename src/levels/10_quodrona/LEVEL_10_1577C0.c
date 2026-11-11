/* LEVEL_10:0x1577C0 -- placement copy of LEVEL_01_15EFD0.c: state-change handler: ignores states 6 and 7 and unflagged objects, otherwise refreshes the object and, for states other than 10 and 11, restarts it; returns 3. */
typedef struct {
    char pad00[0x44];
    int f44;
} Block;

typedef struct {
    char pad00[0x45];
    unsigned char state;
    char pad46[0x1E];
    unsigned int flags;
} Obj;

extern Block D_0039CD60;

extern void func_1D1AD0(Block *b, Obj *o);
extern void func_018B50(char *a0);
extern void func_1CEB10(Obj *o);
extern void func_1586C8(Obj *o, int a, int b);
extern void func_153F78(char *o);
extern void func_07CCA0(void *object, int flag);

int func_1577C0(Obj *o, int state)
{
    Block *b;

    if ((o->flags & 1) == 0 || state == 6 || state == 7) {
        return 1;
    }
    b = &D_0039CD60;
    func_1D1AD0(b, o);
    func_018B50((char *)o);
    if ((unsigned int)(state - 10) < 2u) {
        func_153F78((char *)o);
        func_07CCA0(o, 1);
        return 3;
    }
    func_1CEB10(o);
    func_1586C8(o, 0, b->f44);
    func_153F78((char *)o);
    o->state = 2;
    func_07CCA0(o, 1);
    return 3;
}
