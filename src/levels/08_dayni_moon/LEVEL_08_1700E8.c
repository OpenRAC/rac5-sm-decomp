/* LEVEL_08:0x1700E8 -- placement copy of LEVEL_01_15EFD0.c: state-change handler: ignores states 6 and 7 and unflagged objects, otherwise refreshes the object and, for states other than 10 and 11, restarts it; returns 3. */
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

extern Block D_003E2DE0;

extern void func_208630(Block *b, Obj *o);
extern void func_019EA8(char *a0);
extern void func_205670(Obj *o);
extern void func_170FF0(Obj *o, int a, int b);
extern void func_1678D8(char *o);
extern void func_0845F8(void *object, int flag);

int func_1700E8(Obj *o, int state)
{
    Block *b;

    if ((o->flags & 1) == 0 || state == 6 || state == 7) {
        return 1;
    }
    b = &D_003E2DE0;
    func_208630(b, o);
    func_019EA8((char *)o);
    if ((unsigned int)(state - 10) < 2u) {
        func_1678D8((char *)o);
        func_0845F8(o, 1);
        return 3;
    }
    func_205670(o);
    func_170FF0(o, 0, b->f44);
    func_1678D8((char *)o);
    o->state = 2;
    func_0845F8(o, 1);
    return 3;
}
