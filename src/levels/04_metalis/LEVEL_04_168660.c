/* LEVEL_04:0x168660 -- placement copy of LEVEL_01_15EFD0.c: state-change handler: ignores states 6 and 7 and unflagged objects, otherwise refreshes the object and, for states other than 10 and 11, restarts it; returns 3. */
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

extern Block D_003AE238;

extern void func_1E1058(Block *b, Obj *o);
extern void func_019220(char *a0);
extern void func_1DE4B0(Obj *o);
extern void func_1691D8(Obj *o, int a, int b);
extern void func_161BC0(char *o);
extern void func_07FAE8(void *object, int flag);

int func_168660(Obj *o, int state)
{
    Block *b;

    if ((o->flags & 1) == 0 || state == 6 || state == 7) {
        return 1;
    }
    b = &D_003AE238;
    func_1E1058(b, o);
    func_019220((char *)o);
    if ((unsigned int)(state - 10) < 2u) {
        func_161BC0((char *)o);
        func_07FAE8(o, 1);
        return 3;
    }
    func_1DE4B0(o);
    func_1691D8(o, 0, b->f44);
    func_161BC0((char *)o);
    o->state = 2;
    func_07FAE8(o, 1);
    return 3;
}
