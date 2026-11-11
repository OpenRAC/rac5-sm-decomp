/* LEVEL_09:0x150E10 -- placement copy of LEVEL_01_15EFD0.c: state-change handler: ignores states 6 and 7 and unflagged objects, otherwise refreshes the object and, for states other than 10 and 11, restarts it; returns 3. */
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

extern Block D_0037B0D0;

extern void func_1B3D48(Block *b, Obj *o);
extern void func_018928(char *a0);
extern void func_1B11A0(Obj *o);
extern void func_151988(Obj *o, int a, int b);
extern void func_14E438(char *o);
extern void func_079108(void *object, int flag);

int func_150E10(Obj *o, int state)
{
    Block *b;

    if ((o->flags & 1) == 0 || state == 6 || state == 7) {
        return 1;
    }
    b = &D_0037B0D0;
    func_1B3D48(b, o);
    func_018928((char *)o);
    if ((unsigned int)(state - 10) < 2u) {
        func_14E438((char *)o);
        func_079108(o, 1);
        return 3;
    }
    func_1B11A0(o);
    func_151988(o, 0, b->f44);
    func_14E438((char *)o);
    o->state = 2;
    func_079108(o, 1);
    return 3;
}
