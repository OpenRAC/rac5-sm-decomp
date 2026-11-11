/* LEVEL_02:0x173248 -- placement copy of LEVEL_01_15EFD0.c: state-change handler: ignores states 6 and 7 and unflagged objects, otherwise refreshes the object and, for states other than 10 and 11, restarts it; returns 3. */
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

extern Block D_003AB7A0;

extern void func_1E2948(Block *b, Obj *o);
extern void func_019F48(char *a0);
extern void func_1DFDA0(Obj *o);
extern void func_173DC0(Obj *o, int a, int b);
extern void func_15BCE8(char *o);
extern void func_082F58(void *object, int flag);

int func_173248(Obj *o, int state)
{
    Block *b;

    if ((o->flags & 1) == 0 || state == 6 || state == 7) {
        return 1;
    }
    b = &D_003AB7A0;
    func_1E2948(b, o);
    func_019F48((char *)o);
    if ((unsigned int)(state - 10) < 2u) {
        func_15BCE8((char *)o);
        func_082F58(o, 1);
        return 3;
    }
    func_1DFDA0(o);
    func_173DC0(o, 0, b->f44);
    func_15BCE8((char *)o);
    o->state = 2;
    func_082F58(o, 1);
    return 3;
}
