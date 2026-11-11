/* LEVEL_07:0x15BD60 -- placement copy of LEVEL_01_15EFD0.c: state-change handler: ignores states 6 and 7 and unflagged objects, otherwise refreshes the object and, for states other than 10 and 11, restarts it; returns 3. */
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

extern Block D_003A9290;

extern void func_1D9E08(Block *b, Obj *o);
extern void func_019C28(char *a0);
extern void func_1D6E48(Obj *o);
extern void func_15CC68(Obj *o, int a, int b);
extern void func_158798(char *o);
extern void func_07E7F0(void *object, int flag);

int func_15BD60(Obj *o, int state)
{
    Block *b;

    if ((o->flags & 1) == 0 || state == 6 || state == 7) {
        return 1;
    }
    b = &D_003A9290;
    func_1D9E08(b, o);
    func_019C28((char *)o);
    if ((unsigned int)(state - 10) < 2u) {
        func_158798((char *)o);
        func_07E7F0(o, 1);
        return 3;
    }
    func_1D6E48(o);
    func_15CC68(o, 0, b->f44);
    func_158798((char *)o);
    o->state = 2;
    func_07E7F0(o, 1);
    return 3;
}
