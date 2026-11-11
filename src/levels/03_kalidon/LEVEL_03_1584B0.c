/* LEVEL_03:0x1584B0 -- placement copy of LEVEL_01_15EFD0.c: state-change handler: ignores states 6 and 7 and unflagged objects, otherwise refreshes the object and, for states other than 10 and 11, restarts it; returns 3. */
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

extern Block D_003AE850;

extern void func_1DE448(Block *b, Obj *o);
extern void func_0192C8(char *a0);
extern void func_1DB488(Obj *o);
extern void func_1593B8(Obj *o, int a, int b);
extern void func_1548E8(char *o);
extern void func_07C468(void *object, int flag);

int func_1584B0(Obj *o, int state)
{
    Block *b;

    if ((o->flags & 1) == 0 || state == 6 || state == 7) {
        return 1;
    }
    b = &D_003AE850;
    func_1DE448(b, o);
    func_0192C8((char *)o);
    if ((unsigned int)(state - 10) < 2u) {
        func_1548E8((char *)o);
        func_07C468(o, 1);
        return 3;
    }
    func_1DB488(o);
    func_1593B8(o, 0, b->f44);
    func_1548E8((char *)o);
    o->state = 2;
    func_07C468(o, 1);
    return 3;
}
